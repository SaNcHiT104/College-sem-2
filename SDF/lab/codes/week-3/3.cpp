#include <iostream>
#include <cmath>
using namespace std;
class complex
{
    float realPart;
    float complexPart;

public:
    complex(float real, float complex)
    {
        realPart = real;
        complexPart = complex;
    }
    float getRealPArt()
    {
        return realPart;
    }
    float getComplexPart()
    {
        return complexPart;
    }
    void sum(complex c2)
    {
        cout << "Sum is :" << (realPart + c2.getRealPArt()) << " + " << (complexPart + c2.getComplexPart()) << "i" << endl;
    }
    void subtract(complex c2)
    {
        cout << "Difference is " << (realPart - c2.realPart) << " + " << (complexPart - c2.complexPart) << "i" << endl;
    }
    void multiply(complex c2)
    {
        cout << "Product is " << ((realPart * c2.realPart) - (complexPart * c2.complexPart)) << " + " << ((realPart * c2.complexPart) + (complexPart * c2.realPart)) << "i" << endl;
    }
};
int main(){
    complex c1(3.0,4.0),c2(4.0,5.0);
    c1.sum(c2);
    c1.subtract(c2);
    c1.multiply(c2);

}
