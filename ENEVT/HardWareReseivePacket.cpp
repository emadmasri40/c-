#include "HardWareReseivePacket.h"
#include <iostream>
#include "Priority.h"
HardWareReseivePacket::HardWareReseivePacket() :  HARDWARE_EVENT(Priority::Low)
{
}

void HardWareReseivePacket::execute_Even()
{
	SetupHardWare();
	std::cout << "Hard_Ware Reseive Packet is Executing \n ";
}

HardWareReseivePacket::~HardWareReseivePacket()
{
}

