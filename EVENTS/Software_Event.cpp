#include "Software_Event.h"
#include <iostream>
#include "Priority.h"
void SoftWare_EVENT::SetupSoftdWare()
{
	std::cout << "Setup Soft Ware Executing \n";
}
SoftWare_EVENT::SoftWare_EVENT(const Priority& P) 
{
	this->Priority_E = P;
}
Priority SoftWare_EVENT::get_Priority() 
{
	return  Priority_E ;
}
SoftWare_EVENT::~SoftWare_EVENT()
{
}
