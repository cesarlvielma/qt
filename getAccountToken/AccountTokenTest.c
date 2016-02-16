#include <stdio.h>
#include <stdlib.h>
#include "getAccountToken.h"

int main()
{

    

  // some main loop to check status
  //Account* datamanager_load_account(const USTRING id);
  Account  * account = model_new_account("12341234", "Venezuela");
    while(1){ 

      
      if(model_has_token(account) == 0)
      {
        // managed by task manager
        model_set_token (account,getAccountToken(account)); 
      }
      else
      {
        //DataManager.save(account);
        break;
        
      }
  }

}
