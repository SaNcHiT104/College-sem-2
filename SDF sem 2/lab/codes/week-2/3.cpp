#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students";
    cin>>n;
    float* cg = new float[n];
    for(int i=0;i<n;i++){
        cin>>cg[i];
    }
    cout<<"Details are\n";
    for(int i=0;i<n;i++){
        cout<<cg[i]<<" ";

    }
    delete[] cg;
    return 0;
}