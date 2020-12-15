#include <iostream>
#include<string>

using namespace std;

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{
private:
    //attributes
    string name;
    double balance;

    //methods
public:
    
    void set_balance(double bal)
    {
        balance = bal;
    }

    double get_balance()
    {
        return balance;
    }

    bool deposit(double amount)
    {
        balance += amount;
        return true;
    }
    
    bool withdraw(double amount)
    {
        if(balance-amount>=0)
        {
            balance -= amount;
            return true;
        }
        else
        {
            return false;
        }
    }
    void set_name(string n);

    string get_name();
};

void Account::set_name(string n)
{
    name = n;
}

string Account::get_name()
{
    return name;
}

#endif