#pragma once
#ifndef PIXELES_H_
#define PIXELES_H_

class Pixeles {
private:
	int read, green, blue;
public:
	Pixeles(const int& , const int& , const int& );
	Pixeles();
	Pixeles(const int&);
	bool operator !=(const Pixeles&);
	void operator +=(const Pixeles&);
	void operator *=(const Pixeles&);
	void operator =(const Pixeles&);
	friend std::ostream& operator << (std::ostream&, const Pixeles&);
};

#endif PIXELES_H_ 
