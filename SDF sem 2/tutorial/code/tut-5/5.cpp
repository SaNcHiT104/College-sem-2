#include <iostream>
#include <string.h>
using namespace std;
class mystring
{
    char str[50];

public:
    string operator!();
    void inp_st()
    {
        cout << "Enter the string" << endl;
        cin >> str;
    }
    void display()
    {
        cout << str << endl;
    }
};
string mystring::operator!()
{
    for (int i = 0; str[i] != '_'; i++)
    {
        if (str[i] >= 65 && str[i] <= 96)
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    cout << "Reversed string is" << str << endl;
}
int main()
{
    mystring s; 
    s.inp_st();
    s.display();
    !s;
    // cout<<"Reversed string is:"<<endl;
    // s.display();
    return 0;
}