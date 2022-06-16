#include <iostream>
using namespace std;
class person
{
    static int flag;
    string name;
    int age;

public:
    virtual void getdata()
    {
        if (flag == 1)
        {
            cout << "Enter name: ";
            getline(cin, name);
            flag = 0;
        }
        else
        {

            cout << "Enter name: ";
            cin.ignore(1, '\n');
            getline(cin, name);
        }
        cout << "Enter age: ";
        cin >> age;
    }
    virtual void putdata()
    {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
    virtual ~person()
    {
    }
};
int person::flag = 1;
class professor : public person
{
    int publications, cur;
    static int cur_id;

public:
    professor()
    {
        cur = cur_id++;
    }
    void getdata()
    {
        person::getdata();
        cout << "Enter no. of publication: ";
        cin >> publications;
    }
    void putdata()
    {
        person::putdata();
        cout << "Publications: " << publications << "\nCur_id: " << cur << endl;
    }
};
int professor::cur_id = 1;
class student : public person
{
    int marks[6], cur;
    int sum = 0;
    static int cur_id;

public:
    student()
    {
        cur = cur_id++;
    }
    void getdata()
    {
        person::getdata();
        cout << "Enter marks of 6 subjects: ";
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
            sum += marks[i];
        }
    }
    void putdata()
    {
        person::putdata();
        cout << "Sum of marks: " << sum << "\nCur_id: " << cur << endl;
    }
};
int student::cur_id = 1;
int main()
{
    person *ptr;
    person *ptr1;
    ptr = new professor;
    ptr->getdata();
    ptr->putdata();
    ptr1 = new student;
    ptr1->getdata();
    ptr1->putdata();
    delete ptr;
    delete ptr1;
    return 0;
}
