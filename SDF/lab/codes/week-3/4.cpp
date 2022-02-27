#include<iostream>
#include<cstring>
using namespace std;
class first{
    char name[30];
    public:
    void setName(char * name2){
        strcpy(name,name2);
    }
    void printName(){
        cout<<"The name is "<<name<<endl;
    }
};
int main(){
    char name[] = "Sanchit Jain";
    first t;
    t.setName(name);
    t.printName();
    return 0;
}