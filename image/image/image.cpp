#include<iostream>
#include "Pixeles.h"
#include "image.h"
using namespace std;

Image::Image(const int& W, const int& H) : height(H), width(W), size(H* W),
empty_element(0), resolution(new Pixeles[size])
{
}
Image::~Image()
{
	delete[] resolution;
}
Image::Image(const Image& other) : Image(other.width, other.height)

{
	empty_element = other.empty_element;

	for (size_t i = 0; i < empty_element; i++)
	{
		resolution[i] = other.resolution[i];

	}
}
void Image::operator= (const Image& other) 
{
	height = other.height;
	width = other.width;
	size = other.size;
	resolution = new Pixeles[size];
	empty_element = other.empty_element;

	for (size_t i = 0; i < empty_element; i++)
	{
		resolution[i] = other.resolution[i];

	}
	
}
Image& Image::operator<<(const Pixeles& other)
{
	if (size <= empty_element)
	{

	}
	else
	{
		resolution[empty_element++]= other;
		return *this;
	}
}
Image& Image::operator<<(const Image& other)
{
	if (size <= empty_element)
	{
		return *this;

	}
	else
	{
		for (size_t i = 0; i < other.empty_element; i++)
		{


			resolution[empty_element++] = other.resolution[i];
		}
		return *this;
	}
}
Pixeles& Image::operator[](const int& index)
{
	return resolution[index];
}
std::ostream& operator<<( std::ostream& out, Image& other)
{
	
	for (int i = 0; i < other.empty_element; i++)
	{
		out << other.resolution[i];
	}
	out << endl;
	return out;
	
}
