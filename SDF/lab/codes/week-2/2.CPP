#include<iostream>
using namespace std;
int main(){
    int a[] = {10,20,30};
    int *ptr;
    ptr = a;
    cout<<"Incrementing";
    for(int i=0;i<3;i++){
        cout<<"Address of "<<i<<" is"<<ptr<<endl;
        cout<<"Value of "<<i<<"is"<<*ptr<<endl;
        ptr++;
    }
    cout<<"Decrementing";
    for(int i = 2;i>=0;i--){
        cout<<"Address of"<<i<<"is"<<ptr<<endl;
        cout<<"Value of "<<i<<"is"<<*ptr<<endl;
        ptr--;
    }
    return 0;

}