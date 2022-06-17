#pragma once
#ifndef SYSTEMSLEEP_H_
#define SYSTEMSLEEP_H_
#include "Software_Event.h"
class SystemSleep : public SoftWare_EVENT
{

public:
	SystemSleep();
	void execute_Even()override;
	~SystemSleep();
};

#endif SYSTEMSLEEP_H_

