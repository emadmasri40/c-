
#include <iostream>
#include "Pixeles.h"
//using namespace std;
Pixeles::Pixeles(const int& R, const int& G, const int& B) : read(R), green(G), blue(B)
{
}

Pixeles::Pixeles() : read(0), green(0), blue(0)
{
}

Pixeles::Pixeles(const int& R) : read(R), green(R), blue(R)
{
}

bool Pixeles::operator!=(const Pixeles& other)
{
	return (other.read == read || other.green == green || other.blue == blue);

}

void Pixeles::operator+=(const Pixeles& other) {
	read += other.read;
	blue += other.blue;
	green += other.green;

}
void Pixeles::operator*=(const Pixeles& other) {
	read *= other.read;
	blue *= other.blue;
	green *= other.green;

}

void Pixeles::operator=(const Pixeles& other)

{
	read = other.read;
	green = other.green;
	blue = other.blue;


}

std::ostream& operator<<(std::ostream& out, const Pixeles& other)
{
	out << other.read <<"  "<<"  "<< other.green << "  "<< other.blue << std::endl;
	return out;
	
}
