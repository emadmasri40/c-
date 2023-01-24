#include "SystemShutdown.h"
#include <iostream>
#include "Priority.h"
SystemShutdown::SystemShutdown(): SoftWare_EVENT (Priority::Low )
{
}

void SystemShutdown::execute_Even()
{
	SetupSoftdWare();
	std::cout << "Soft_Ware Shutdown is Executing \n ";
}

SystemShutdown::~SystemShutdown()
{
}


