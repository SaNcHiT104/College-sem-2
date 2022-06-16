#include<iostream>
using namespace std;
int add(int a,int b){
    int x = a+b;
    return x;
}
int subtract(int a,int b){
    int x = a-b;
    return x;

}
int multiply(int a,int b){
    int x = a*b;
    return x;
}
float divide(int a,int b){
    float x = a/b;
    return x;
}
int main(){
    cout<<"Enter two numbers";
    int a,b;
    cin>>a>>b;
    int sum = add(a,b);
    int sub = subtract(a,b);
    int mul = multiply(a,b);
    float div = divide(a,b);
    cout<<"sum"<<"\t"<<sum<<"\n";
    cout<<"sub"<<"\t"<<sub<<"\n";
    cout<<"mul"<<"\t"<<mul<<"\n";
    cout<<"divide"<<"\t"<<div<<"\n";

}