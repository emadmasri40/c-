#pragma once
#ifndef SYSTEMWAKEUP_H_
#define SYSTEMWAKEUP_H_
#include "Software_Event.h"
class SystemWakeup : public SoftWare_EVENT
{

public:
	SystemWakeup();
	void execute_Even()override;
	~SystemWakeup();
};

#endif SYSTEMWAKEUP_H_

