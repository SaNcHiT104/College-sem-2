#include<iostream>
#include<cstring>
using namespace std;
class id{
    
    public:
    int number;
    id(){

    }
    id(int id1){
        number=id1;
    }
    void printID(){
        cout<<"The id is :"<<number<<endl;
    }

};
int main(){
    id id1,id2(18);
    id1.number=27;
    id1.printID();
    id2.printID();
    return 0;
}