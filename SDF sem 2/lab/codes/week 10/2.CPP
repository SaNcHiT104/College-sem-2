#include<iostream>
using namespace std;
template <class T>
T minimum(T n1, T n2)
{
if(n1<n2) return n1;
else return n2;
}
template <class T>
T maximum(T n1, T n2)
{
if(n1>n2) return n1;
else return n2;
}
int main()
{
int m, n;
cout<<"Enter two integers";
cin>>m>>n;
cout<<"Minimum is: "<<minimum(m,n)<<endl<<"Maximum is:"<<maximum(m,n)<<endl;
float a, b;
cout<<"Enter two floating point numbers";
cin>>a>>b;
cout<<"Minimum is: "<<minimum(a,b)<<endl<<"Maximum is: "<<maximum(a,b)<<endl;
return 0;
}