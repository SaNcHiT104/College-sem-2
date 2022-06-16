#include<iostream>
#include<cmath>
using namespace std;
class triangle{
    int a,b,c;
    public:
    void initialize(){
        a= 3;
        b= 4;
        c =5;
    }
    void perimeter(){
        int perimeter;
        perimeter = a+b+c;
        cout<<"The perimeter is = "<<perimeter<<endl;
    }
    void area(){
        
        float s = (a+b+c)/2.0;
        float area = sqrt(s*(s-a)*(s-b)*(s-c)); 
        cout<<"the area is = "<<area<<endl;
    }
};
int main(){
    triangle t;
    t.initialize();
    t.perimeter();
    t.area();
    return 0;

}