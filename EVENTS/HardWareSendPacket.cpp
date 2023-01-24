#include "HardWareSendPacket.h"
#include <iostream>
#include "Priority.h"
HardWareSendPacket::HardWareSendPacket() : HARDWARE_EVENT(Priority::High)
{
}

void HardWareSendPacket::execute_Even()
{
	SetupHardWare();
	std::cout << "HardWareSendPacket is Executing \n ";
}

HardWareSendPacket::~HardWareSendPacket()
{
}
