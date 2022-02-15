#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter string in lowercase";
    char str[200];
    cin>>str;
    int l = strlen(str);
    int v =0;
    for(int i=0;i<l;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            v++;
        }
    }
    cout<<"Number of vowels are"<<"\t"<<v;
}