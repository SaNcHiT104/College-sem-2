#include <iostream>
using namespace std;
template<class T>
class MyVector
{
int n;
T *arr=new T[n];
public:
MyVector(int m)
{
n=m;
cout<<"Enter Vector Elements"<<endl;
for(int i=0;i<n;i++)
{
cout<<"Enter element "<<i+1<<": ";
cin>>arr[i];
}
}
int size()
{
return n;
}
void push_back(T s)
{
n++;
T *arr=new T[n];
arr[n]=s;
}
void pop_back(T s)
{
n--;
T *arr=new T[n];
arr[n]=s;
}
~MyVector()
{
cout<<"Vector Elements"<<endl;
for(int i=0;i<n;i++)
{
cout<<"Element "<<i+1<<": "<<arr[i]<<endl;
}
}
};
int main()
{
cout<<"Enter number of elements in the vector"<<endl;
int v;
cin>>v;
MyVector <int> v1(v);
cout<<"Initial Vector Size: "<<v1.size()<<endl;
cout<<"Enter element for pushing";
int m,n;
cin>>m;
v1.push_back(m);
cout<<"Vector Size after pushing: "<<v1.size()<<endl;
v1.pop_back(m);
cout<<"Vector Size after popping: "<<v1.size()<<endl;
return 0;
}
