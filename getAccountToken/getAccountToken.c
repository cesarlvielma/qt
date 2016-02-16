

#include "jsonparser.h"
#include "account.h"
#include "mockups.h"
#include <stdio.h>

char * getAccountToken(Account  * account){

  // returned token
  char * token = NULL; 


  // company token. some 40 lentght chars.
  char masterToken[40]; 

  // local mac Adress
  char mac[18]; 

  //the url of backend.
  char requestUrl[4096]; 


  // Variales to parse the Json response.
  JSONParser  parser;
  JSONTree  * jsonTree;
  JSONTree  * jsonValue;

  // Response from API.
  char * jsonResponse = NULL;

  
  macAddress(mac);
  getMasterToken(masterToken);


  // API communication
  sprintf(requestUrl,ACOUNT_INIT, HOST,USER_BASEURL,masterToken,mac);
  jsonResponse = httpPOST(requestUrl);

  if (jsonResponse == NULL)
    return NULL;
  
  // parse API message
  json_parser_init(&parser, jsonResponse, strlen(jsonResponse) + 1);
  jsonTree  = json_parser_parse(&parser);
  jsonValue = json_lookup_value(jsonTree, "AccountToken"); 

   if (jsonValue != NULL)
     return token;
    
   else
    return NULL;

}
