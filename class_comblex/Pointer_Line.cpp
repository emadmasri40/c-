#include <iostream>
#include <math.h>

using namespace std; class Point {
private: float x, y;
public:
    Point(float x_in = 0, float y_in = 0) {
        x = x_in;
        y = y_in;
    }
    float get_x()
    {
        return x;
    }
    float get_y()
    {
        return y;
    }
    void set_x(float x_s)
    {
        x = x_s;
    }
    void set_y(float y_s)
    {
        y = y_s;
    }
    void print_P() {
        cout << "x=" << x << " , y=" << y << endl;
    }
};
class Line {
private:
    float m, c;
public:
    Line()
    {
        m = 0;
        c = 0;

    }
    ///////// call by refreance
    Line(Point& P1, Point& P2) : Line()
    {


        m = (P2.get_y() - P1.get_y()) / (P2.get_x() - P1.get_x());
        cout << m << endl;
        c = P1.get_y() - m * P1.get_x();
    }
    void Print() {
        cout << "y=" << m << "x + " << c << endl;
    }
    Line(const Line& other, int c_plus) : m(other.m), c(other.c)
    {
        c += c_plus;

    }
    ~Line()
    {
        m = 0;
        c = 0;
    }

};
int main()
{
    Point P1(7, 12);
    Point P2(5, 13);
    Line equation1(P1, P2);
    equation1.Print();
    Line  equation2(equation1, 30);
    equation2.Print();


    return 0;
}