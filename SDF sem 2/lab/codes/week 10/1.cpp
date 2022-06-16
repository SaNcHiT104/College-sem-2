#include<iostream>
using namespace std;
template <class T>
class calculator
{
private:
T n1,n2;
public:
calculator(T a1, T a2)
{
n1=a1;
n2=a2;
}
T add()
{
return n1+n2;
}
T sub()
{
if(n2<n1) return n1-n2;
else return n2-n1;
}
T mult()
{
return n1*n2;
}
T divi()
{
if(n1>n2) return n1/n2;
else return n2/n1;
}
};
int main()
{
calculator<int> a(2,3);
cout<<"Sum is "<<a.add()<<endl<<"Difference is "<<a.sub()<<endl<<"Product is"<<a.mult()<<endl<<"Quotient is "<<a.divi()<<endl;
calculator<float> b(2.5,3.2);
cout<<"Sum is "<<b.add()<<endl<<"Difference is "<<b.sub()<<endl<<"Product is"<<b.mult()<<endl<<"Quotient is "<<b.divi()<<endl;
return 0;
}