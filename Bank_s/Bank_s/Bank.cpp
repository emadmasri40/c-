#include <string.h>
#include <iostream>
#include "account.h"
#include "Bank.h"
#include <vector>

vector<account> Bank::Banks;
using namespace std;
void Bank::search(const long&accountNumber , int& posetion )
{
	
	posetion = 0;
	for (account& var : Banks)
	{
		if (var.get_Account_Number() == accountNumber)
			break;
		posetion ++;
	}
	
}

Bank& Bank::createobject()
{
	static Bank ob;
	return ob;
}
Bank::Bank()
{
}
Bank::~Bank()
{
	Banks.clear();
}
void Bank::OpenAccount(const string& ﬁrstname, const string& lastname, const float& balance)
{
	account a(ﬁrstname, lastname, balance);
	Banks.push_back(a);
}
void Bank::BalanceEnquiry(const long& accountNumber)
{
	int pos;
	
	search(accountNumber, pos);
	cout << Banks.at(pos).get_Balance() << endl;
}
void Bank::Deposit(const long& accountNumber, const float& amount)
{
	int pos;
	search(accountNumber, pos);
	Banks.at(pos).Deposit(amount);
}
void Bank::Withdraw(const long& accountNumber, const float& amount)
{
	int pos;
	search(accountNumber, pos);
	Banks.at(pos).Withdrow(amount);
}
void Bank::CloseAccount(const long& accountNumber)
{

	int pos=0;
	vector<account>::iterator it;
	it = Banks.begin();
	search(accountNumber, pos);
	it += pos;
	Banks.erase(it);
}
void Bank::ShowAllAccounts()
{
	for (account& var : Banks)
	{
		
		cout << var << endl;
	}
}

