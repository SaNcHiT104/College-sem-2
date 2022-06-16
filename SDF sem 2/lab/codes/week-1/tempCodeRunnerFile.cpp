#include <iostream>
using namespace std;
int main()
{

    int a, b, maxr, minr, maxc, minc;
    cout << "Enter the dimension of array";
    cin >> a >> b;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    minr = 0;
    minc = 0;
    maxr = a-1;
    maxc = b-1;
    int total = a * b;
    int count = 0;
    while (count < total)
    {
        for (int i = minc; i <= maxc && count < total; i++)
        {
            cout << arr[minr][i]<<endl;
            
            count++;
        }
        minr++;
        for (int j = minr; j <= maxr && count < total; j++)
        {
            cout << arr[j][maxc]<<endl;
            
            count++;
        }
        maxc--;
        for (int i = maxc; i >= minc && count < total; i--)
        {
            cout << arr[maxr][i]<<endl;
            
            count++;
        }
        maxr--;
        for (int j = maxr; j >= minr && count < total; j--)
        {
            cout << arr[j][minc]<<endl;
            
            count++;
        }
        minc++;
    }
    return 0;
}