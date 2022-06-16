#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number \n";
    cin>>n;
    int ans=0,pow=100;
    while(n!=0){
        int x =n%10;
        n/=10;
        ans+=x*pow;
        pow/=10;
    }
    cout<<"reverse number is"<<"\t"<<ans;
}