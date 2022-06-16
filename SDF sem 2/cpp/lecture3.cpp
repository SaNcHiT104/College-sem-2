//INTRO OF CLASS--OOPs
//encapsulation and data hiding
#include<iostream>
using namespace std;
class student{
    //members of class -->1) data var 2)member function
    //access specifiers : public,private,protected
    //default : private
    // protected :  //private
   
    public : //important
    int eno;
    float cg;
    void initialize(int e,int c){
        eno=e;
        cg=c;
    }
    void display(){
        cout<<cg<<"\t"<<eno;
    }


};
struct abc{ //struct is public(can be accessed outside)
    int x;
    float cg;
};
int main(){
    
    // struct
    // abc o1

    // o1.x=10;
    // o1.cg=9.1;
    // cout<<o1.x<<o1.cg;
    
        // CLASS
    student o1; //o1.cg is in public so we can access o1.cg
    int d,g;
    cin>>d>>g;
    o1.initialize(d,g);
    o1.display();


}