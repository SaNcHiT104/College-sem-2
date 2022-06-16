#include<iostream>
using namespace std;
class student{
    int marks;
    public:
    student(int m){
        marks=m;
    }
    int average(student m1){
        return (marks+m1.marks)/2;
    }
    int average(student m1,student m2){
        return (m1.marks +m2.marks)/2;
    }
};
int main(){
    student m1(10),m2(20);
    cout<<m1.average(m2)<<endl;
    cout<<m1.average(m1,m2)<<endl;
}