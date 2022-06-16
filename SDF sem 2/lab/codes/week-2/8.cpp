#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* arr = new int [n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int found =0;
    for(int i=0;i<8;i++){
        if(arr[i]==x){
            if(found==0){
                cout<<"present at ";
                found=1;
                cout<<endl;
            }
            cout<<i<<endl;
        }
    }
    if(found==0){
        cout<<"Element is not present";
    }
    return 0;
}
