#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,4,4,2,8};
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
