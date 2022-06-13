#include <iostream>
#include "Pixeles.h"
#include "Image.h"
using namespace std;
int main()
{
    Pixeles color1(10, 20, 50);
    Image img(3, 2);                                                  
    Image img2(2, 2);
    cout << img;
    img << color1 << Pixeles() << Pixeles(1) << Pixeles(0, 1, 0) << Pixeles(1, 0, 0) << Pixeles(0, 0, 1);
    cout << img;
    img2 << Pixeles() << Pixeles(20, 10, 5) << Pixeles(40, 0, 0) << Pixeles(1);
    Pixeles color2(img[2]);
    Pixeles color3(img[3]);
    cout << color1;
    color2 != color3 ? cout << "not White\n" : cout << "White\n";
    img2[1] += color1;
    img[2] *= img2[1];
    cout << "--------------------------2-------------------------------" << endl;
    cout << img2;
    cout << "----------------------2-----------------------------------" << endl;
     img2 = img;
     cout << "-------------------------1--------------------------------" << endl;
     cout << img;
     cout << "-------------------------2--------------------------------" << endl;
     cout << img2;
    return 0;
}