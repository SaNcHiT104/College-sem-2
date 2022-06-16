#include <iostream> 
using namespace std;
class base_food_items {
protected:
    char item_name[20];
    int quantity;
    int item_price;
public:
    virtual void order()
    {
    cout<< "enter item name:";
    cin>> item_name;
    cout<< "enter quantity";
    cin>> quantity;
    cout<< "Item price";
    cin>> item_price;
    }
    void total_price()
    {
        cout<<"order is: " << item_name<<"\t"<<"quantity:"<<quantity<<endl; cout << "total price=" << item_price*quantity<<endl;
    }
};
class Chinese: public base_food_items
{
public:
    void order()
    {
        cout<<"Welcome to Chinese Section !"<<endl;
        cout<< "enter item name:";
        gets(item_name);
        cout<< "enter quantity";
        cin>> quantity;
        cout<< "Item price";
        cin>> item_price;
    }
    void total_price()
    {
        cout<<"order is: " << item_name<<"\t"<<"quantity:"<<quantity<<endl; cout << "total price=" << item_price*quantity<<endl;
    }
};
int main()
{
    Chinese c1;
    c1.order();
    c1.total_price();
}

