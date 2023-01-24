#include "HardWare_Event.h"

#include <iostream>

void HARDWARE_EVENT::SetupHardWare()
{
	std::cout << "Setup Hard Ware Executing \n";
}

HARDWARE_EVENT::HARDWARE_EVENT(const Priority& P) 
{
	this->Priority_E= P; 
}

Priority HARDWARE_EVENT::get_Priority() 
{
	return  Priority_E ;
}

HARDWARE_EVENT::~HARDWARE_EVENT()
{
}
