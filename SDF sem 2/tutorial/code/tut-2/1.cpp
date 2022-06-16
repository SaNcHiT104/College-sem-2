#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number of subjects :"<<endl;
    int n;
    cin>>n;
    int *marks = new int[4];
    for(int i=0;i<n;i++){
        cout<<"enter marks of subject :"<<i+1<<endl;
        cin>>*(marks+i);
    }
    cout<<"Displaying the details"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Marks of subject are :"<<marks[i]<<endl;
    }
    delete [] marks;
    return 0;

}