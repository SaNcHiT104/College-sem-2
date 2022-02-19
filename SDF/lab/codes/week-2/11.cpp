#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the order";
    cin>>n>>m;
    int ** arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int [m];
    }
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"Row of elements";
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Displaying elemts"<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<"Row of elements are";
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}