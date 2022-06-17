
#pragma once
#ifndef EVENTMANAGER_H_
#define EVENTMANAGER_H_
#include <thread>
#include <queue>
#include "compertor.h"
using namespace std;


class EventManager
{
private:

	static priority_queue <Event*, vector<Event*>, compertor> ContinerEvent;

	thread* Thread;
	void Execute_Function_in_the_queue();
	EventManager();
public:
	EventManager(const EventManager&) = delete;
	static EventManager& CreateEventManager(void);
	void StartHandlingEvent();
	void StopHandlingEvent();
	void PostEvent(Event*);
	~EventManager();
};

#endif EVENTMANAGER_H_