#include "EventManager.h"
#include "Event.h"
#include <vector>
#include <queue>
#include <iostream>
#include <Windows.h>
#include <process.h>
CRITICAL_SECTION critical;

using namespace std;
priority_queue <Event*, vector<Event*>, compertor> EventManager::ContinerEvent;
void EventManager::Execute_Function_in_the_queue()
{
	while (!ContinerEvent.empty())
	{
		Event* T;
		EnterCriticalSection(&critical);
		if (ContinerEvent.empty())/////why??????????
			break;
			T = ContinerEvent.top();
			ContinerEvent.pop();
		cout << "number of ThreadID : " << GetCurrentThreadId() << endl;
		LeaveCriticalSection(&critical);
		T->execute_Even();
		cout <<"---------------------------------------\n";
	}
	
}
EventManager& EventManager::CreateEventManager(void)
{
	static EventManager object ;
	InitializeCriticalSection(&critical);
	return object;
}
void EventManager::StartHandlingEvent()
{
	Thread = new std::thread(&EventManager::Execute_Function_in_the_queue, this);
	
}

void EventManager::StopHandlingEvent()
{
	Thread->join();
	delete Thread;
	DeleteCriticalSection(&critical);

}

void EventManager::PostEvent(Event* E)
{
	
	ContinerEvent.push(E);
}

EventManager::~EventManager()
{
	
}
EventManager::EventManager()
{
	
}

