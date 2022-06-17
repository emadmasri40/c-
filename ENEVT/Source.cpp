#include <iostream>
#include "EventManager.h"
#include "HardWareReseivePacket.h"
#include "HardWareSendPacket.h"
#include "SystemShutdown.h"
#include "SystemWakeup.h"
#include "SystrmSleep.h"
#include "EventGenerator.h"
#include <ctime>


using namespace std;



int main()
{
	EventManager& EM = EventManager::CreateEventManager();
	EventGenerator EG;
	EG.EventGeneratorStart(); // create thread 1
	EG.EventGeneratorStart(); // create thread 2
	EG.EventGeneratorStop();  // join and delete thread1 & 2
	EM.StartHandlingEvent();
	EM.StartHandlingEvent();
	EM.StartHandlingEvent();
	EM.StopHandlingEvent();

	return 0;
}	


