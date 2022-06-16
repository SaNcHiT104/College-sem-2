
#include <iostream> 
using namespace std;
int main()
{
    int n1;
    cout << "Enter an integervalue : "; cin >> n1; char c1; 
    cout<< "Enter a character value : ";
    cin >> c1;
    double d1;
    cout << "Enter a double value : ";
    cin >> d1;
    try
    {
        if (n1 == 10)
        {
            throw n1;
        }
        else
        {
            cout << "YOUR VALUE IS:" << n1 << endl;
        }
    }
    catch (int x)
    {
        cout << "YOU CAN'T ENTER 10" << endl;
    }
    try
    {
        if (c1 == 'z')
        {
            throw c1;
        }
        else
        {
            cout << "YOUR CHARACTER IS:" << c1 << endl;
        }
    }
    catch (char c)
    {
        cout << "YOU CAN'T ENTER z" << endl;
    }
    try
    {
        if (d1 == 2.1)
        {
            throw d1;
        }
        else
        {
            cout << "YOUR VALUE IS:" << d1 << endl;
        }
    }
    catch (double d)
    {
        cout << "YOU CAN'T ENTER 2.1" << endl;
    }
}