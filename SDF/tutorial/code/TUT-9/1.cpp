#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "ENter age: ";
    cin >> age;
    try
    {
        if (age < 18)
            throw age;
        cout << "Access Granted: you are old enough" << endl;
        return 0;
    }
    catch (int x)
    {
        cout << "Access Denied: You must be atleast 18 years old" << endl;
        cout << "Age: " << x;
    }
}
