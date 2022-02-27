#include<iostream>
#include<cmath>
using namespace std;
class trianlge{
    public:
    int a,b,c;
    trianlge(int a,int b,int c){
        this->a = a;
        this->b= b;
        this->c = c;
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
    trianlge t(3,4,5);
    t.area();
    t.perimeter();
}
