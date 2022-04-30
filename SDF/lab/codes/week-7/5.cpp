#include<iostream>
using namespace std;
class base{
    public:
    virtual void display1()=0;
    virtual void display2()=0;
};
class derived:public base{
    public:
    void display1(){
        cout<<"This is Display1() method of Derived Class"<<endl;
    }
    void display2(){
        cout<<"This is Display2() method of Derived Class"<<endl;
    }
};
int main(){
    base *b;
    derived d;
    b=&d;
    b->display1();
    b->display2();
    return 0;
}