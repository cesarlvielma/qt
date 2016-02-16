#include <string.h>
#include <stdlib.h>

#define HOST				"http://example.com"
#define PORT				80
#define USER_BASEURL		"/api/v1/user"
#define OPERATOR_BASEURL	"/api/v1/operator"
#define GATEWAY_BASEURL		"/api/v1/gateway"
#define SECUALEVENTS		"%s%s/gateways/%s/secual_events"
#define ACCOUNTS			"%s%s/accounts/%s"
#define GATEWAY				"%s%s/gateways/%s"
#define ACOUNT_INIT			"%s%s/init?companytoken=%s&mac=%s"
#define SENSOR				"%s%s/gateways/%s/sensors/%s"
#define MAX_HEADER			1024
#define MAX_JSON			(MAX_RESPONCE - MAX_HEADER)
#define LASTMODIFIED		"Last-Modified: "
#define TIMESTAMP			"%a, %d %b %Y %T GMT"

#ifndef BOOL
#define BOOL int
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE 1
#endif

void macAddress(char * mac){

	int j,i;
	char * macWithSeparators = "00:27:10:7C:11:78";
	// char  hexValue [3];

	// for (i =0, j=0 ; i < 6 ; i ++, j+=3 ){
	// 	strncpy ( hexValue, macWithSeparators[j], 2 );
	// 	hexValue[2]= '\0';
	// 	mac[i]= atoi(hexValue);
	// }

	strcpy (mac,macWithSeparators);

}


void  getMasterToken( char * masterToken){

	int tokenSize = 40;
	int i;
	for (i = 0; i < tokenSize ; i ++){
		masterToken[i] =  65+i;
	}

}