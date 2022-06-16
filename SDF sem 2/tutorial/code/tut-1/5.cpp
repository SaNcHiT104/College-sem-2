#include<iostream>
using namespace std;
int main(){
     
    cout << "Truth table of OR operator is: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << i << " " << j << " : " << (i||j) << endl;
        }
        
    }
    cout << "Truth table of AND operator is: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << i << " " << j << " : " << (i&&j) << endl;
        }
        
    }
    cout << "Truth table of NOT operator is: " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << i << " : " << (!i) << endl;
        
    }
    return 0;
}