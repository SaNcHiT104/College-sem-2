#include<iostream>
using namespace std;
class A{
    protected:
    float height;
    public:
    void getheight(){
        cout<<"Enter height :";
        cin>>height;
    }
};
class B{
    protected:
    float base;
    public:
    void getbase(){
        cout<<"Enter base :";
        cin>>base;
    }
};
class C : public A,public B{
    protected:
    float ar;
    public:
    void area(){
        getbase();
        getheight();
        ar =(base*height)/2;
        cout<<"Area is : "<<ar;
    }
};
int main(){
    C obj;
    obj.area();
    return 0;
}