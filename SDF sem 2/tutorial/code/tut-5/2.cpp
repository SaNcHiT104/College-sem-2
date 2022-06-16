#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    friend ostream &operator<<(ostream &output, const Distance &D)
    {
        output << "Feet=" << D.feet << "Inches=" << D.inches << endl;
        return output;
    }
    friend istream &operator>>(istream &input, Distance &D)
    {
        input >> D.feet >> D.inches;
        return input;
    }
};
int main()
{
    Distance D1(10, 20), D2(11, 36), D3;
    cout << "Enter the third distance" << endl;
    cin >> D3;
    cout << D1 << endl;
    cout << D2 << endl;
    cout << D3 << endl;
    return 0;
}