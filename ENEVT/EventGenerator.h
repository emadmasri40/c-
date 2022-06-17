#pragma once
#ifndef EVENTGENERATOR_H_
#define EVENTGENERATOR_H_
#include <queue> // include in cpp file get error why??
#include <thread> // include in cpp file get error why??
using namespace std;
class HardWareReseivePacket;
class HardWareSendPacket;
class SystemShutdown;
class SystemWakeup;
class SystemSleep;
class Event;
class EventGenerator
{
private:
	HardWareReseivePacket* S1;
	HardWareSendPacket* S2 ;
	SystemShutdown * S3 ;
	SystemWakeup* S4 ;
	SystemSleep* S5 ;
	Event* Event_random[5];
	//Event* Return_event;
	thread* Thread_G[8]; //assume maximum thread will be create 8 thread 
	int number_of_thread_created;
   //static queue<Event*> Contener_Random_Event; // sent this to main 
	void SetEventRandom ();
  
public:
	EventGenerator();
	void EventGeneratorStart(); // create number of thread
	void EventGeneratorStop();
	~EventGenerator();
};

#endif EVENTGENERATOR_H_