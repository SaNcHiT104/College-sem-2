#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    v1.assign(5,10); // fill vector with 10 , 5 times
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }
    v1.push_back(5); //last element 5
    cout<<v1[v1.size()-1]<<endl;
    v1.insert(v1.begin(),20); // inserting 20 at starting
    v1.pop_back();
    cout<<v1[v1.size()-1];
    vector<int> v2;
    v2.assign(10,10);
    v1.swap(v2);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl;
    }
}