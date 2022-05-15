#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main(){
    map<int,int> m1;
    m1.insert(pair<int,int>(1,4));
    m1.insert(pair<int,int>(2,7));
    m1.insert(pair<int,int>(3,4));
    m1.insert(pair<int,int>(4,5));
    m1.insert(pair<int,int>(5,8));
    m1.insert(pair<int,int>(6,10));
    map<int,int>:: iterator itr;
    for(itr=m1.begin();itr!=m1.end();++itr){
        cout<<itr->first<<"\t"<<itr->second<<endl;
    }
}
