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
    Distance operator()(int a, int b, int c)
    {
        Distance D;
        D.feet = a + c + 10;
        D.inches = b + c + 100;
        return D;
    }
    void displayDistance()
    {
        cout << "F:" << feet << endl;
        cout << "I:" << inches << endl;
    }
};
int main()
{
    Distance D1(10, 11), D2;
    cout << "First distance:";
    D1.displayDistance();
    D2 = D1(5, 10, 20);
    cout << "Second distance:";
    D2.displayDistance();
    return 0;
}
