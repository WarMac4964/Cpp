#include <iostream>
#include "Account.h"
#include "Player.h"

using namespace std;


int main(){
    Account Frank_account;
    Frank_account.set_name("Frank's Account");
    Frank_account.set_balance(1000.0);

    if(Frank_account.deposit(200.0))
    {
        cout<<"Deposit Ok"<<endl;
    }
    else
    {
        cout<<"Deposit Not Allowed"<<endl;
    }

    if(Frank_account.withdraw(500.0))
    {
        cout<<"Withdraw Ok"<<endl;
    }
    else
    {
        cout<<"Not Sufficient Funds"<<endl;
    }

    if(Frank_account.withdraw(1500.0))
    {
        cout<<"Withdraw Ok"<<endl;
    }
    else
    {
        cout<<"Not Sufficient Funds"<<endl;
    }
    

    Player Frank;
    Frank.talk("I am here");


    return 0;
}