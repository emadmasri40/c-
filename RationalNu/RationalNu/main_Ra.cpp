#include <iostream>
#include "Rational.h"
using namespace std;



int main() {

	Rational D;
	Rational D1(5,12);
	 --D1;
	 cout << D1;


	Rational D3(2,9);
	D = D1 + D3;
	cout << D;

	D = D1 - D3;
	cout << D;

	D = D1 * D3;
	cout << D;
	D = D1 + D3 - Rational(1,2);

	cout << D;

	D = D1 + 3 ;
	cout << D;

	D = D1 + 3 + 2;
	cout << D;

	return 0;
}

