#include "SystrmSleep.h"
#include <iostream>

SystemSleep::SystemSleep() : SoftWare_EVENT (Priority::High)
{

}

void SystemSleep::execute_Even()
{
	SetupSoftdWare();
	std::cout << "Soft_Ware Sleep t is Executing \n ";
}

SystemSleep::~SystemSleep()
{
}

