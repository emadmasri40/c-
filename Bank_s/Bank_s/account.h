#pragma once
#ifndef ACCOUND_H_
#define ACCOUND_H_
#include <string.h>
#include <string>
using namespace std;

class account
{
public:
	account();
	account (const string&  , const string& ,const float& );

	~account();
	void Deposit(const float&);
	void Withdrow(const float&);
	string get_name ()const;
	int get_Account_Number()const;
	float get_Balance()const;
	account(const account& other);
	
	friend ostream &operator<< (ostream& ,const account&);
	
private:
	string Frist_name, Last_name;
	int Account_Number;
	float Balance;
	static int Next_Account_Number;

};


#endif ACCOUND_H_
	