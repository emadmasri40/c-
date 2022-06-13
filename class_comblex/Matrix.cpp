#include <iostream>

using namespace std;

class Matrix {
private:
    int rows, colums;
    int** Matrix_2D;
public:
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
    void set_element(int row_in = 0, int colum_in = 0, int data = 0) {
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
    Matrix(const Matrix& other) : rows(other.rows), colums(other.colums), Matrix_2D(new int* [rows])
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
int main()
{
    Matrix M1(5, 5);
    Matrix M;
    Matrix m(2, 2);
    m.set_element(0, 0, 3);
    m.set_element(0, 1, 4);
    m.set_element(1, 0, 5);
    m.set_element(1, 1, 6);
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            M1.set_element(i, j, i + j);
    M1.print_M();
    cout << endl;
    m.print_M();
    Matrix M2(m);
    cout << endl << "/***************" << endl;
    M2.print_M();
    return 0;
}
