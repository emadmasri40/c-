#pragma once

#ifndef HARDWARE_EVENT_H_
#define HARDWARE_EVENT_H_
#include "Event.h"
#include "Priority.h"
class HARDWARE_EVENT : public Event
{
protected:
	void SetupHardWare();
public:
	HARDWARE_EVENT(const Priority&);
	 Priority get_Priority() override;
	virtual void execute_Even() = 0;
	~HARDWARE_EVENT();
};

#endif HARDWARE_EVENT_H_
