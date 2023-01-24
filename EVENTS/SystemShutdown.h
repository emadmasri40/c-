#pragma once
#ifndef SYSTEMSHUTDOWN_H_
#define SYSTEMSHUTDOWN_H_
#include "Software_Event.h"
class SystemShutdown : public SoftWare_EVENT
{

public:
	SystemShutdown();
	void execute_Even()override;
	~SystemShutdown();
};

#endif SYSTEMSHUTDOWN_H_

