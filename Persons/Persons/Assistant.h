#pragma once
#pragma once
#ifndef ASSISTANT_H_
#define ASSISTANT_H_
#include "Person.h"
class person;
class Assistant : public Person {
private:
    string department, research_Name;

public:
    Assistant(const string& F = " ", const string& L = " ", const int& A = 0, const string& De = " ", const string& re = " ");
    void put_data();
    void get_data();
};
#endif ASSISTANT_H_
