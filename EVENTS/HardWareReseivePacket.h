#pragma once
#ifndef HardWareReseivePacket_H_
#define HardWareReseivePacket_H_
#include "HardWare_Event.h"
class HardWareReseivePacket : public HARDWARE_EVENT
{

public:
	HardWareReseivePacket();
	void execute_Even() override;
	~HardWareReseivePacket();
};

#endif HardWareReseivePacket_H_

