#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    virtual void sum()=0;
    A(int i){
        x=i;
    }
};
class B : public A{
     protected:
     int y;
     public:
     B(int a,int b):A(b){
         y=a;
     }
     void sum(){
         cout<<"The sum is "<<x+y;
     }
};
int main(){
    int a,b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    B obj(a,b);
    obj.sum();
    return 0;
}