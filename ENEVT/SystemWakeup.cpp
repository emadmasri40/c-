#include "SystemWakeup.h"
#include <iostream>
#include "Priority.h"
SystemWakeup::SystemWakeup(): SoftWare_EVENT (Priority:: Medium)
{
}

void SystemWakeup::execute_Even()
{
	SetupSoftdWare();
	std::cout << "Soft_Ware Wakeup is Executing \n ";

}

SystemWakeup::~SystemWakeup()
{
}

