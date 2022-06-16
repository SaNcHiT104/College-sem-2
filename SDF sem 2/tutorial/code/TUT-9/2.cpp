#include <iostream>
using namespace std;
double zeroDivision(int x,int y)
{
 if(y==0)
 throw "Denominator zero. Division Not possible!";
 double result=(1.0*x)/y;
 return result;
}
int main()
{
 int n1,n2;
 double final;
cout<<"Enter Numerator: ";
cin>>n1;
cout<<"Enter Denominator: ";
cin>>n2;
try
 {
 final=zeroDivision(n1,n2);
 cout<<"Result is: "<<final;
 }
 catch(char const* a)
 {
 cout<<a;
 }
 return 0;
}
