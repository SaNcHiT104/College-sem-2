#include<iostream>
using namespace std;
int main(){
    int* a = new int;
    *a = 5;
    float* f = new float;
    *f = 10.5;
    cout<<*a<<" "<<*f<<endl;
    delete a;
    delete f;
}
