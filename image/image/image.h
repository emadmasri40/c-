#pragma once
#ifndef IMAGE_H_
#define IMAGE_H_
class Pixeles;
class Image
{
public:
	Image(const int& W = 1, const int& H = 1);
	~Image();
	Image(const Image&);

	Image& operator <<(const Pixeles&);
	Image& operator <<(const Image&);
	Pixeles& operator[](const int& index);
    void operator =(const Image&);
    friend std::ostream& operator <<(std::ostream&,  Image&);

private:
	int width, height, size, empty_element;
	int* a;
	Pixeles* resolution;

};
#endif IMAGE_H_ 