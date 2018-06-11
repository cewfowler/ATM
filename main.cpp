//Kenny Ramos
//Harrison Schorr
//Gianfranco Dutka
//Cyrus Najmi
//Eric Roque
//Christian Fowler
//Brooke Mott-Smith

//  main.cpp
//  Final


#include <iostream>
#include "Customer.h"
#include "ATM.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;





int main(){
    
    // Customer* alex = new Customer("me","two","1994",3,4,5);
    ATM atm = *new ATM();
    
    atm.displayMenu();
    atm.displayOptions();
    
    
    
    
    /*
     If we did go into the addNewCustomer method, add the customer unto the vector
     if (atm.add){
     //   atm.allCustomers.push_back(*atm.currentCustomer);
     }
     
     
     bool exit = false;
     
     while(exit!=true){
     exit = atm.displayOptions();
     
     }
     
     
     cout<<"Good-Bye...\n\n\n";
     
     */
    return 0;
}


