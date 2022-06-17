#pragma once
#ifndef EVENT_H_
#define EVENT_H_
#include "Priority.h"
class Event
{
protected :
Priority Priority_E;

public:
	Event();
	virtual Priority get_Priority() = 0;
	virtual void execute_Even() = 0;
	~Event();
	
};

#endif EVENT_H_
