#include <iostream>
using namespace std;
int main()
{
    int array[100],m=10e6,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>array[i];
        if(array[i]>0&&m>array[i]){
            m=array[i];
        }
    }
    for(int i=0;i<n;i++){
        if(m==array[i]){
            m++;
            i=-1;
        }
    }
    cout<<m;
    return 0;
}