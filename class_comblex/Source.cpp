#include <iostream>
#include <math.h>

using namespace std;
class complex {
private :
    int real, imaginary;
public :
    complex (int real_in =0 , int imaginary_in =0 ){
        real = real_in;
        imaginary = imaginary_in;
    }
    int get_real() {
        return real;
    }
    int get_imaginary() {
        return imaginary;
    }
    complex ADD(complex nubmer){
        complex tem(this->real+nubmer.get_real() , this->imaginary + nubmer.get_imaginary());
        return tem;
    }
    complex SUB(complex nubmer) {
        complex tem(this->real - nubmer.get_real(), this->imaginary - nubmer.get_imaginary());
        return tem;
    }
    complex MUL(complex nubmer) {
        ///(a+ib)(c+id) = (ac-bd) + i(ad + bc)
        int frist = ((this->real * nubmer.get_real()) - (this->imaginary * nubmer.get_imaginary()));

        int secund = ((this->real * nubmer.get_imaginary()) + (this->imaginary * nubmer.get_real()));
        complex tem(frist , secund);
        return tem;

    }
};
class Matrix {
private : 
    int rows, colums;
    int** Matrix_2D;
public :
    Matrix(int row_in = 0, int colum_in = 0)
    {
        rows = row_in;
        colums = colum_in;
        Matrix_2D = new int* [rows];

        for (int i = 0; i < rows; i++)
        {
            Matrix_2D[i] = new int[colums];
        }
        
    }
    int get_element(int row_in = 0, int colum_in = 0)
    {
        return this->Matrix_2D[row_in][colum_in];
    }
    void set_element(int row_in = 0, int colum_in = 0 , int data =0){
        this->Matrix_2D[row_in][colum_in] = data;
    }
    void print_M()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < colums; j++)
                cout << Matrix_2D[i][j];
            cout << endl;

        }
    }
    Matrix(const Matrix& other) : rows(other.rows), colums(other.colums), Matrix_2D(new int*[rows])
    {
        for (int i = 0; i < rows; i++)
        {
            Matrix_2D[i] = new int[colums];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < colums; j++)
                Matrix_2D[i][j] = other.Matrix_2D[i][j];
        }


    }

        ~Matrix()
        {

   
        for (int i = 0; i < rows; i++) {
            delete[] Matrix_2D[i];
        }
        delete[] Matrix_2D;
        rows = 0;
        colums = 0;
    }
};
class Point {
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
private :
    float m, c;
public:
    Line()
    {
        m = 0;
        c = 0;

    }
    Line(Point P1, Point P2) : Line()
    {
        

        m = (P2.get_y() - P1.get_y()) / (P2.get_x() - P1.get_x());
        cout << m << endl;
        c = P1.get_y() - m * P1.get_x();
    }
    void Print() {
        cout << "y=" << m << "x + " << c << endl;
    }
    Line(const Line& other, int c_plus) : m(other.m) , c(other.c)
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
 /*   complex C1;
    complex C12; 
    complex C13; 
    complex C2(3);
    complex C3(20, 10);
    complex C4(30, 20);
    C1 = C3.ADD(C4);
    C12 = C3.SUB(C4);
    C13 = C3.MUL(C4);

    Matrix M1(5, 5);
    Matrix m(2, 2);
    m.set_element(0, 0, 3);
    m.set_element(0, 1, 4);
    m.set_element(1, 0, 5);
    m.set_element(1, 1, 6);
   
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            M1.set_element(  i,j,i+j);
    M1.print_M();
    cout << endl;
    m.print_M();
    Matrix M2(m);
    cout << endl << "/***************"<<endl;
    M2.print_M();
    
   int** Matrix_2D;
    Matrix_2D = new int*[5];
  //  Matrix_2D[0] = new int [5];
    //Matrix_2D = new int*[5];
    for (int i = 0; i < 5; i++)
    {
      //  Matrix_2D[i] = new int[5];
        Matrix_2D[i][1]=5;
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; i < 5; j++)
            M1.set_element(i , j , i+j);
        

    }

   // printf(C3);
  //  cout<< C1.get_real()<<"    " <<C1.get_imaginary() << "i"<< endl<<C12.get_real() << C12.get_imaginary() << endl;
  //  cout << C13.get_real() << "    " << C13.get_imaginary() << "i";

   int** E;

    //cout<<"Hello World"<<e;
    E = new int* [5];
    for (int i = 0; i < 5; i++)
           E[i] = new int[5];

    

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << E[i][j];
        cout << endl;
    }
    for (int i = 0; i < 5; i++) {
        delete[] E[i];
    }
    delete[] E;*/