	#include<iostream>
using namespace std; 
class Base 
{ 
    public:
    virtual void print()
    {
        cout<<"In Base";
    }
};
class Derived: public Base 
{
    public:
    void print()
    {
        cout<<"In Derived";
    }
};
int main() 
{
Base *base_ptr = new Derived;
Derived *derived_ptr;
derived_ptr = dynamic_cast<Derived*>(base_ptr);
if(derived_ptr != NULL)
{
    cout<<"It is working"; 
}
else 
{
    cout<<"cannot cast Base* to Derived*";
}
return 0;
}

 
