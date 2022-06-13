#include <iostream>

using namespace std;
class complex {
private:
    int real, imaginary;
public:
    complex(int real_in = 0, int imaginary_in = 0):
    real(real_in) ,
    imaginary(imaginary_in) {}
    int get_real() {
        return real;
    }
    int get_imaginary() {
        return imaginary;
    }
    complex ADD(const complex& nubmer) {
        complex tem(this->real + nubmer.get_real(), this->imaginary + nubmer.get_imaginary());
        return tem;
    }
    complex SUB(const complex& nubmer) {
        complex tem(this->real - nubmer.get_real(), this->imaginary - nubmer.get_imaginary());
        return tem;
    }
    complex MUL(const complex& nubmer) {
        ///(a+ib)(c+id) = (ac-bd) + i(ad + bc)
        int frist = ((this->real * nubmer.get_real()) - (this->imaginary * nubmer.get_imaginary()));

        int secund = ((this->real * nubmer.get_imaginary()) + (this->imaginary * nubmer.get_real()));
        complex tem(frist, secund);
        return tem;

    }
    void print_c()
    {
        cout << this->real << " i" << this->imaginary<<endl;
    }
};

int main()
{
      complex C1;
       complex C12;
       complex C13;
       complex C2(3);
       complex C3(20, 10);
       complex C4(30, 20);
       C1 = C3.ADD(C4);
       C12 = C3.SUB(C4);
       C13 = C3.MUL(C4);
       C1.print_c();
       C12.print_c();
    return 0;
}
