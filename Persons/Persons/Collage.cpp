#include "Collage.h"

Collage::Collage(const int& S) : Continer(new Person* [S]), size(S), index(0) {}
void Collage::addStuffMember(Person& P) {
    if (index < size)
        Continer[index++] = &P;
}
void Collage::get_data() {
    for (int i = 0; i < index; i++)
        Continer[i]->get_data();
}
void Collage::put_data() {
    for (int i = 0; i < index; i++)
        Continer[i]->put_data();
}