#include<iostream>
using namespace std;
struct employee{
    char name[20];
    int age;
    float salary;
};
int main(){
    struct employee emp;
    cout<<"Enter name ";
    cin.get(emp.name,20);
    cout<<"Enter age :";
    cin>>emp.age;
    cout<<"Eneter salary :";
    cin>>emp.salary;
    cout<<"\nDETAILS\n";
    cout<<"Name :"<<emp.name<<endl;
    cout<<"Age :"<<emp.age<<endl;
    cout<<"Salary :"<<emp.salary<<endl;
    return 0;
    
    
}