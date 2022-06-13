#pragma once
#ifndef PROFESSOR_H_
#define PROFESSOR_H_
#include "Person.h"
class person;
class Professor : public Person {
private:
    string publications;
    int  cur_id;
public:
    Professor(const string& F = " ", const string& L = " ", const int& A = 0, const string& pub = " ", const int& cu = 0);
    void put_data();
    void get_data();
};
#endif PROFESSOR_H_

