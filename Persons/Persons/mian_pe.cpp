
#include <iostream>
#include <string>
#include "Assistant.h"
#include "Collage.h"
#include "Professor.h"
using namespace std;
int main()
{
   
    Collage C(10);
    Assistant* A = new Assistant();
    Professor* B = new Professor();
    Assistant* A1 = new Assistant();
    Professor* B1 = new Professor();
    C.addStuffMember(*A);
    C.addStuffMember(*B);
    C.addStuffMember(*A1);
    C.addStuffMember(*B1);
    C.get_data();
    C.put_data();
    return 0;
}
