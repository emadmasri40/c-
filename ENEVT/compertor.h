#pragma once
#include "Event.h"
class compertor {
public:
	bool operator()(Event* E1, Event* E2) {

		return (E1->get_Priority() < E2->get_Priority());
	}

};
