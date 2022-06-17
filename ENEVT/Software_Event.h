#pragma once

#ifndef SOFTWARE_EVENT_H_
#define SOFTWARE_EVENT_H_
#include "Event.h"
class SoftWare_EVENT : public Event
{
protected:
	void SetupSoftdWare();
public:
	SoftWare_EVENT(const Priority&);
	Priority get_Priority()override;
	virtual void execute_Even() = 0;
	~SoftWare_EVENT();
};

#endif SOFTWARE_EVENT_H_
