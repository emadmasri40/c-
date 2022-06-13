#include "Professor.h"
#include<iostream>


Professor::Professor(const string& F = " ", const string& L = " ", const int& A = 0, const string& pub = " ", const int& cu = 0) :
    Person(F, L, A),
    publications(pub),
    cur_id(cu)
{}
void Professor::put_data() {
    cout << "First_name = " << First_name <<
        "\n Last_name = " << Last_name <<
        "\n Age = " << Age <<
        "\n publications = " << publications <<
        "\n cur_id = " << cur_id << endl;
}


void Professor::get_data() {
    cout << " Please Enter First_name Last_name Age  publications cur_id = " << endl;
    cin >> First_name >> Last_name >> Age >> publications >> cur_id;
}