#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex()
    {
        real = 1;
        img = 1;
    }
    Complex(int n1, int n2)
    {
        real = n1;
        img = n2;
    }

    friend Complex operator+(Complex c1, Complex c2);

    void displaynumber()
    {
        cout << "Complex Number you entered " << real << " + " << img << "i" << endl;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    Complex c1(11, 2);
    Complex c2(4, 36);
    Complex c3;

    c1.displaynumber();
    c2.displaynumber();

    c3 = c1 + c2;
    c3.displaynumber();

    return 0;
}
