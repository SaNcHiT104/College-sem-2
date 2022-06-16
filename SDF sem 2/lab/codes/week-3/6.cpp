#include<iostream>
using namespace std;
class rectangle{
    int length,breadth;
    public:
    void set(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
};
int main(){
    rectangle r;
    r.set(10,50);
    cout<<"Area of rectangle is :"<<r.area()<<"unit square"<<endl;
    return 0;
}