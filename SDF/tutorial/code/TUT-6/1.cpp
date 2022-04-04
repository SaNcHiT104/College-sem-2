#include <iostream>
using namespace std;
class shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
    virtual ~shape()
    {
    }
};
class rectangle : public shape
{
    int l;
    int b;

public:
    rectangle(int a = 0, int z = 0)
    {
        l = a;
        z = b;
    }
    float area()
    {
        return l * b;
    }
    float perimeter()
    {
        return 2 * (l * b);
    }
};
class square : public shape
{
    int l;

public:
    square(int l = 0)
    {
        this->l = l;
    }
    float area()
    {
        return l * l;
    }
    float perimeter()
    {
        return 4 * l;
    }
};
class circle : public shape
{
    int r;

public:
    circle(int r = 0)
    {
        this->r = r;
    }
    float area()
    {
        return 3.14 * r * r;
    }
    float perimeter()
    {
        return 2 * 3.14 * r;
    }
};
int main()
{
    shape *ptr[6];
    ptr[0] = new rectangle(8, 9);
    cout << "Area of rect: " << ptr[0]->area() << endl;
    cout << "Perimeter of rect: " << ptr[0]->perimeter() << endl;
    ptr[1] = new square(5);
    cout << "Area of square: " << ptr[1]->area() << endl;
    cout << "Perimeter of square: " << ptr[1]->perimeter() << endl;
    ptr[2] = new circle(10);
    cout << "Area of circle: " << ptr[2]->area() << endl;
    cout << "Perimeter of circle: " << ptr[2]->perimeter() << endl;
    delete[] ptr;
    return 0;

}