#ifndef PERSON_H_
#define PERSON_H_
#include <string.h>
#include <string>
using namespace std;
#pragma once
class Person {
protected:
    string First_name, Last_name;
    int Age;
public:
    Person(const string&, const string&, const int&);
    virtual void put_data() = 0;
    virtual void get_data() = 0;
};
#endif PERSON_H__

