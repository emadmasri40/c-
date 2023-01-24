#pragma once

#ifndef HardWareSendPacket_H_
#define HardWareSendPacket_H_
#include "HardWare_Event.h"
class HardWareSendPacket : public HARDWARE_EVENT
{

public:
	HardWareSendPacket();
	 void execute_Even() override;
	~HardWareSendPacket();
};

#endif HHardWareSendPacket_H_
