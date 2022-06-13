#pragma once
#ifndef RATION_H_
#define RATION_H_

class Rational
{
private:
	int num1, num2;

public:
	Rational(const int& num = 1, const int& num_2 = 1);
	~Rational();
	Rational(const Rational&);
	Rational operator + (const Rational&) const;
	Rational operator - (const Rational&) const;
	Rational operator * (const Rational&) const;
	void operator -- ();
	friend std::ostream&  operator << (std::ostream & , const Rational&);

};
#endif RATION_H_ 