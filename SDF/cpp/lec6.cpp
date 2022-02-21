#include<iostream>
using namespace std;
class student{
    int eno;
    float cgpa;
    int m1,m2,m3;
    public:
    student(){ //  - initialize the member variables(Always made in public)
                //-humesha kudh call hota hai
        cout<<"Enter eno and m1,m2,m3";
        cin>>eno>>m2>>m2>>m3;

    }
    void initialize(){ //inline functions - poora code uthakr obj file mai jakr paste krta hai
        cout<<"Enter eno"<<endl;
        cin>>eno;
        cout<<"Enter marks"<<endl;
        cin>>m1>>m2>>m3;

    }
    void initialize(int e,int mone,int mtwo,int mthree){
        eno =e;
        m1 = mone;
        m2 = mtwo;
        m3 = mthree;
    }
    void initialize(int e){
        cout<<"Enter marks"<<endl;
        cin>>m1>>m2>>m3;
    }
    // function overloading can be differentiated by 
    //1-data type of parameters
    //2-number of parameters
    //3-order of arguments
    //class ke andr jo function hote hai vo default inline ho jaata hai aur na koi dusra option hota hai
    void display(){
        cout<<eno<<" "<<cgpa<<endl;
    }
    void calculateCGPA(); // difinition of function need to be written inside the class
};
inline void student::calculateCGPA(){  // outside function - if inline written tb inline, agr nahi likhe to outside
    cgpa = (m1+m2+m3)/3.0;
}

int main(){
    student o1,o2,o3;
    // o1.initialize(1,10,20,30); // dusre vala initialize call hua - overloading function
    // o2.initialize();
    // o3.initialize(); 
    o1.calculateCGPA();
    o2.calculateCGPA();
    o3.calculateCGPA();
    o1.display();
    o2.display();
    o3.display();
    return 0;
}