#include<iostream>
#include<map>
using namespace std;

class InvalidCountryException{
};

class UserRegistration{
    public:
    string name;
    string usercountry;
   
    UserRegistration(string name,string usercountry){
        this->usercountry=usercountry;
        this->name=name;
    }
    void check(){
        try{
        if( usercountry !="India"){
            throw InvalidCountryException();
        }
        else{
            cout<<"Registration Successfull";
        }
    }
    catch(InvalidCountryException x)
        {
            cout<<"Desh drohi";
        }
    }
};
int main(){
UserRegistration A("sanchit","US");
A.check();
}

