#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    for(int i=1;i<10;i++){
        v1.push_back(i*10);
    }
    cout<<v1.at(4)<<endl;
    cout<<v1[2]<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    int *pos = v1.data();
    cout<<*pos;
    for(auto i=v1.begin();i!=v1.end();i++){
        cout<<*i<<endl;
    }
}