#include <iostream>
#include "Rational.h"

Rational::Rational(const int& num, const int& num_2) : num1(num) , num2(num_2)
{

}
Rational::~Rational()
{
}

Rational::Rational(const Rational& other) : Rational(other)
{
}

Rational Rational::operator + (const Rational & other ) const 
{
	int numb_1 = num2 * other.num2;
	int numb_3 =(( (numb_1 /(other.num2) ) * other.num1 ) + ((numb_1 /num2 ) * num1));

	return Rational((numb_3),(num2 * other.num2)) ;
}

Rational Rational::operator-(const Rational&other) const
{
	int numb_1 = num2 * other.num2;
	
	int numb_3 = (((numb_1 / num2) * num1) -((numb_1 / (other.num2)) * other.num1)  );

	return Rational((numb_3), (num2 * other.num2));
}

Rational Rational::operator*(const Rational&other) const
{
	return Rational( num1*other.num1 , num2*other.num2 );
}

void Rational::operator --()
{
	num1 = num1 - num2;
	
}
std::ostream& operator << (std::ostream& out, const Rational& other) 
{
	other.
	out << other.num1 << "/" << other.num2 << std::endl;
	return out;

}
