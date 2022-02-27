
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
    int enrollmentNumber;
    char name[20];
    char branch[4];
    float cgpa;

public:
    Student(int en, char *na, char *br, float cg)
    {
        enrollmentNumber = en;
        strcpy(name, na);
        strcpy(branch, br);
        cgpa = cg;
    }
    Student(int en, char *na, float cg)
    {
        enrollmentNumber = en;
        strcpy(name, na);
        strcpy(branch, "CSE");
        cgpa = cg;
    }
    Student()
    {
        enrollmentNumber = 1;
        strcpy(name, "Unknown");
        strcpy(branch, "ECE");
        cgpa = 7.0;
    }
    int getEnrollmentNumber()
    {
        return enrollmentNumber;
    }
    char *getName()
    {
        return name;
    }
    char *getBranch()
    {
        return branch;
    }
    float getCGPA()
    {
        return cgpa;
    }
    void setEnrollmentNumber(int eno)
    {
        enrollmentNumber = eno;
    }
    void setName(char *name2)
    {
        strcpy(name, name2);
    }
    void setBranch(char *br)
    {
        strcpy(branch, br);
    }
    void setCGPA(float cg)
    {
        cgpa = cg;
    }
};

int main()
{
    char name[] = "Sanchit Jain";
    char branch[] = "CSE";
    Student s1(1, name, branch, 8.7);
    Student s2(2, name, 8.7);
    Student s3;
    cout << "Details of Student 1: ";
    cout << s1.getEnrollmentNumber() << " " << s1.getName() << " " << s1.getBranch() << " " << s1.getCGPA() << endl;
    cout << "Details of Student 2: ";
    cout << s2.getEnrollmentNumber() << " " << s2.getName() << " " << s2.getBranch() << " " << s2.getCGPA() << endl;
    cout << "Details of Student 3: ";
    cout << s3.getEnrollmentNumber() << " " << s3.getName() << " " << s3.getBranch() << " " << s3.getCGPA() << endl;
    s1.setCGPA(9.1);
    s2.setCGPA(9.0);
    s3.setCGPA(8.9);
    cout << "Details of Student 1: ";
    cout << s1.getEnrollmentNumber() << " " << s1.getName() << " " << s1.getBranch() << " " << s1.getCGPA() << endl;
    cout << "Details of Student 2: ";
    cout << s2.getEnrollmentNumber() << " " << s2.getName() << " " << s2.getBranch() << " " << s2.getCGPA() << endl;
    cout << "Details of Student 3: ";
    cout << s3.getEnrollmentNumber() << " " << s3.getName() << " " << s3.getBranch() << " " << s3.getCGPA() << endl;
    return 0;
}
