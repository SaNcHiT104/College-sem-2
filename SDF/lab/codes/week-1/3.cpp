#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    float x;
    cout<<"Enter 4 numbers"<<endl;
    cin>>a>>b>>c>>d;
    if(b==c){
        cout<<"Cannot divide by zero";

    }
    
    else{
        x=a/(b-c)+d;
        cout<<"the desired output is:"<<x<<endl;
    }
}