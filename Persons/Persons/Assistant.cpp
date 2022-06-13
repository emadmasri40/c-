#include "Assistant.h"

#include <iostream>
#include <string>
using namespace std;


Assistant::Assistant(const string& F = " ", const string& L = " ", const int& A = 0, const string& De = " ", const string& re = " ") :
    Person(F, L, A),
    department(De),
    research_Name(re)
{}
void Assistant::put_data() {
    cout << "First_name = " << First_name <<
        "\n Last_name = " << Last_name <<
        "\n Age = " << Age <<
        "\n department = " << department <<
        "\n research_Name = " << research_Name << endl;
}

void Assistant::get_data() {
    cout << " Please Enter First_name Last_name Age  department research_Name = " << endl;
    cin >> First_name >> Last_name >> Age >> department >> research_Name;
}
