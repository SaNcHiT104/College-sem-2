#include<iostream>
using namespace std;
template <class T, class U>
class A{
    T a;
    U b;
    static int count;
};
int main(){
    A<int,int> c;
    A<char,int> d;
    
}