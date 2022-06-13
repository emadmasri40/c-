#ifndef COLLAGE_H_
#define COLLAGE_H_
#include <string.h>
#include <string>
class Person;
class Collage {
private:
    Person** Continer;
    int size;
    int index;
public:
    Collage(const int&);
    void addStuffMember(Person&);
    void get_data();
    void put_data();
};
#endif COLLAGE_H_
