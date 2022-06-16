#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
vector <int> v1,v2;
cout<<"For the First Array"<<endl;
int n;
cout<<"Enter Element: ";
cin>>n;
while(n>=0)
{
if(n>=0)v1.push_back(n);
cout<<"Enter Element: ";
cin>>n;
}
cout<<"For the Second Array"<<endl;
cout<<"Enter Element: ";
cin>>n;
while(n>=0)
{
if(n>=0)v2.push_back(n);
cout<<"Enter Element: ";
cin>>n;
}
cout<<endl<<endl;
for(auto i=v2.begin();i!=v2.end();i++)
{
int c=0;
for(auto j=v1.begin();j!=v1.end();j++)
{
if(*i == *j) c++;
}
if(c==0) v1.push_back(*i);
}
for(auto i=v1.begin();i!=v1.end();i++)
{
if(*i>*(i+1))
{
int t=*i;
*i=*(i+1);
*(i+1)=t;
}
}
sort(v1.begin(),v1.end());
cout<<"The Updated Vector is: {";
for(auto i=v1.begin();i<v1.end();i++)
{
cout<<*i<<",";
}
cout<<*(v1.end())<<"}";
}