#include "EventGenerator.h"
#include "HardWareReseivePacket.h"
#include "HardWareSendPacket.h"
#include "SystemShutdown.h"
#include "SystemWakeup.h"
#include "SystrmSleep.h"
#include <Windows.h>
#include <process.h>
#include <iostream>
#include <random>
#include <ctime>
#include "EventManager.h"


#define Frequancy 1240
#define sleepthread 854
#define number_of_Event 9
CRITICAL_SECTION critical_1;

EventGenerator::EventGenerator() : S1(new HardWareReseivePacket()) ,
								   S2 (new HardWareSendPacket()),
								   S3( new SystemShutdown()),
								   S4 (new SystemWakeup()),
									S5(new SystemSleep()) 
									
{
	Event_random[0]=S1;
	Event_random[1]=S2;
	Event_random[2]=S3;
	Event_random[3]=S4;
	Event_random[4]=S5;
	number_of_thread_created = 0;
	InitializeCriticalSection(&critical_1);
	
}

void EventGenerator::EventGeneratorStart( )
{
	 
   Thread_G[number_of_thread_created++] = new std::thread(&EventGenerator::SetEventRandom, this);
   std::this_thread::sleep_for(std::chrono::milliseconds(sleepthread));
}

void EventGenerator::EventGeneratorStop()
{
	for (int i = 0; i < number_of_thread_created; i++)
	{
		Thread_G[i]->join();
		delete Thread_G[i];
	}
}
void EventGenerator::SetEventRandom()
{
	EventManager& EM = EventManager::CreateEventManager();	
	for (size_t i = 0; i < number_of_Event; i++)
	{
		srand(time(NULL));
		int randomName = (rand()+i) % 5; //
		std::this_thread::sleep_for(std::chrono::milliseconds(Frequancy));
		EM.PostEvent(Event_random[randomName]);
		//Contener_Random_Event.push();   
		// cout << "number of ThreadID : " << GetCurrentThreadId() <<"    ::   " <<time(NULL) <<" number :: "<< randomName << endl;

	}
}

EventGenerator::~EventGenerator()
{
	delete S1;
	delete S2;
	delete S3;
	delete S4;
	delete S5;
	
}
