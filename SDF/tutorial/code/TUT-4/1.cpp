#include <iostream>
#include <string.h>
using namespace std;
class Travel
{
private:
    long Code;
    char place[20];
    int trav, bus;

public:
    Travel() //default constructor
    {
        cout << "Default values invoked" << endl;
        Code = 1001;
        strcpy(place, "Agra");
        trav = 5;
        bus = 1;
    }
    void newPlan();
    void showPlan();
};
void Travel::newPlan()
{
    cout << "Enter New PlanCode: ";
    cin >> Code;
    cout << "Enter Place: ";
    cin.ignore(1, '\n');
    cin.getline(place, 20);
    cout << "Enter No. of Travellers: ";
    cin >> trav;
    if (trav < 20)
        bus = 1;
    else if (trav >= 20 && trav < 40)
        bus = 2;
    else if (trav >= 40)
        bus = 3;
}
void Travel::showPlan()
{
    cout << "PlanCode: " << Code << "\n"<< "Place: "<<place<<"\n "<<" NO.Travellers : "<<trav<<"\n "<<" No.Of buses : "<<bus<<endl; 
}
int main()
{
    Travel tb;
    tb.newPlan();
    tb.showPlan();
    return 0;
}