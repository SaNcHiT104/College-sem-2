#include <iostream>
using namespace std;
double harmonic(int x,int y)
{
 if(y==0||x==0)
 throw "Harmonic mean Not possible!";
 if(y==-x)
 throw 101;
 double result=2/((1.0/x)+(1.0/y));
 return result;
}
int main()
{
 int n1,n2;
 double final;
cout<<"Enter Num1: ";
cin>>n1;
cout<<"Enter Num2: ";
cin>>n2;
try
 {
 final=harmonic(n1,n2);
 cout<<"Result is: "<<final;
 }
 catch(char const* a)
 {
 cout<<a;
 }
 catch(int x)
 {
 cout<<"2nd number is the negative of 1st. Harmonic mean not possible!"<<endl;
 }
 return 0;
}
