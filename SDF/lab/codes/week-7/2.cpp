#include<iostream>
using namespace std;
class A{
    protected:
    string name;
    int enroll;
    public:
    void getdetails(){
        cout<<"Enter Name and Enroll :";
        cin>>name>>enroll;
        cout<<endl;
    }

};
class B{
    protected:
    int marks[5];
    public:
    void getmarks(){
        cout<<"Enter marks of 5 subjects :"<<endl;
        for(int i=0;i<5;i++){
            cout<<"Enter marks for "<<i<< "Subject :";
            cin>>marks[i];
        }
    }
};
class C : public A,public B{
    int sum;
    public:
    void all(){
        getdetails();
        getmarks();
        sum=0;
        for(int i=0;i<5;i++){
            sum +=marks[i];
        }
        cout<<"the sum is :"<<sum<<endl;
        cout<<"Your name is :"<<name<<" "<<"and enroll is "<<enroll;

    }
};
int main(){
    C obj;
    obj.all();
    return 0;
}