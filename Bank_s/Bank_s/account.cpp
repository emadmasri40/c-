#include <string.h>
#include <iostream>
#include <string>
#include "account.h"
using namespace std;
int account::Next_Account_Number = 0;
account::account() : 
    Frist_name(""),
    Last_name(""),
    Balance(0) , 
    Account_Number(0)
{}
account::account(const string& First , const string& Last, const float& blance ) :
    Frist_name(First),
    Last_name(Last),
    Balance (blance)
{
    Account_Number = ++Next_Account_Number;// start account number from 1
}
account::account(const account& other) :
 Frist_name(other.Frist_name),
Last_name(other.Last_name),
Balance(other.Balance) ,
Account_Number(other.Account_Number)
{}
account::~account()
{
    Balance=0;
    Account_Number=0;
}
void account::Deposit(const float& Balane_D)
{
    Balance += Balane_D;
}
void account::Withdrow(const float& Balane_W) {
    if (Balance >= Balane_W)
        Balance -= Balane_W;
    else
        cout << "The Balance is not enough" << endl;
}
string account::get_name()const {
    return Frist_name + Last_name;
}
int account::get_Account_Number()const {
    return Account_Number;
}
float account::get_Balance()const {
    return Balance;
}
 ostream& operator<< (ostream& output, const account& C) {

     output << "Fist Name : " << C.Frist_name << "   Last Name : " << C.Last_name << "   Balance : "
         << C.Balance << "    Account_Number : " << C.Account_Number;
     return output;
}

