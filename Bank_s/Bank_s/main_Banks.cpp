#include <string.h>
#include <iostream>
#include <string>
#include "account.h"
#include "Bank.h"
enum user_transaction { OPENACCOUNT , Deposit , Withdrow , BalanceEnquiry ,
						CloseAccount , ShowAllAccounts, QUIT};
using namespace std;
int main()
{
	/*account C5;
	account C2("Emad", "Masri", 1000);
	account C4("Sandy", "Emad", 1000);
	account C3("Mina", "Masri", 2000);

	cout << C2 << endl << C3 << endl << C4;
	cout << "-------------------------------";
	C4.Withdrow(200);
	C3.Withdrow(500);
	C2.Withdrow(100);

	cout << C2 << endl << C3 << endl << C4;
	cout << "-------------------------------";
	C3.Deposit(200);
	C2.Deposit(500);
	C4.Deposit(200);

	cout << C2 << endl << C3 << endl << C4;
	cout << "-------------------------------";
	C4.Withdrow(2522);
	C3.Withdrow(1000);
	C2.Withdrow(100);

	cout << C2 << endl << C3 << endl << C4;
	C5 = C2;
	cout << C2 << endl << C3 << endl << C4;
	account C6("wws", "Masri", 1000);
	cout << C2 << endl << C3 << endl << C6;
	cout << "-------------------------------";
	*/
	Bank bank = Bank::createobject();
	user_transaction U;
	int I_U;
	string ﬁrst_name, last_name;
	long accountNumber;
	float balance, amount;
	do {
		cout << "plase enter number if OPENACCOUNT =0  && Deposit=1 && Withdrow=2 && BalanceEnquiry =3 && CloseAccount=4 &&ShowAllAccounts=5 &&  QUIT=6  " << endl;
		cin >> I_U;
		U = static_cast<user_transaction>(I_U);
		switch (U)
		{
		case OPENACCOUNT:
		{
			cout << "Plase Enter First name and Last name and Balance" << endl;
			cin >> ﬁrst_name >> last_name >> balance;
			bank.OpenAccount(ﬁrst_name, last_name, balance);
			break;
		}

		case Deposit:
		{
			cout << "Plase Enter Account Number and Deposit Value" << endl;
			cin >> accountNumber >> amount;
		bank.Deposit(accountNumber, amount);
		break;
		}
		case Withdrow:
		{
			cout << "Plase Enter Account Number and Withdrow Value" << endl;
			cin >> accountNumber >> amount;
			bank.Withdraw(accountNumber, amount);

			break;
		}
		case BalanceEnquiry:
		{
			cout << "Plase Enter Account Number" << endl;
			cin >> accountNumber;
			bank.BalanceEnquiry(accountNumber);
			break;

		}
		case CloseAccount:
		{
			cout << "Plase Enter Account Number" << endl;
			cin >> accountNumber;
			bank.CloseAccount(accountNumber);
			break;
		}
		case ShowAllAccounts:
		{
			bank.ShowAllAccounts();
			break;
		}
		default : break;
		};
		//bank.ShowAllAccounts();

	} while (U != QUIT);
			
			return 0;
}