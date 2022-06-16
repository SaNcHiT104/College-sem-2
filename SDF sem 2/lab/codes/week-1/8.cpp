#include <iostream>
using namespace std;

struct phone{
    int price;
    int batteryPower;
    float rating;
};

int main()
{
    struct phone phone1, phone2;
    cout << "Enter Phone1 details: " << endl;
    cout << "Enter Price: ";
    cin >> phone1.price;
    cout << "Enter Battery Power (in mAh): ";
    cin >> phone1.batteryPower;
    cout << "Enter Rating (between 0-5): ";
    cin >> phone1.rating;
    if(phone1.rating > 5 || phone1.rating < 0){
        cout << "Invalid rating entered\n";
        return 0;
    }
    cout << "Enter Phone2 details: " << endl;
    cout << "Enter Price: ";
    cin >> phone2.price;
    cout << "Enter Battery Power (in mAh): ";
    cin >> phone2.batteryPower;
    cout << "Enter Rating (between 0-5): ";
    cin >> phone2.rating;
    if(phone2.rating > 5 || phone2.rating < 0){
        cout << "Invalid rating entered\n";
        return 0;
    }
    int arr[3];
    arr[0] = phone1.price>phone2.price;
    arr[1] = phone1.batteryPower<phone2.batteryPower;
    arr[2] = phone1.rating<phone2.rating;
    const char *componentsName[3] = {"Price", "Battery Power", "Rating"}; 
    for (int i = 0; i < 3; i++)
    {
        cout << "Phone better w.r.t " << componentsName[i] << " is Phone" << (arr[i] + 1) << endl;
    }
        
    return 0;
}
