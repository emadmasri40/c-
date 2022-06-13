#pragma once
#ifndef BANK_H_
#define BANK_H_
#include <vector>
class Bank
{
private:

	
	
	string Frist_name, Last_name;
	int Account_Number;
	float Balance;
	static vector <account> Banks;
	Bank();
public:
	static Bank& createobject();
	~Bank();
	void OpenAccount(const string& ﬁrstname, const string& lastname, const float& balance);
	void BalanceEnquiry(const long& accountNumber);
	void Deposit(const long& accountNumber, const float& amount);
	void Withdraw(const long& accountNumber, const float& amount);
	void CloseAccount(const long& accountNumber);
	void ShowAllAccounts();
	void search(const long& , int &);
	Bank(const account& other)=delete;

};


#endif BANK_H_ 