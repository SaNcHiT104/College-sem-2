#include <iostream>
using namespace std;
struct abc{
    int a;
    float b;
};
int main()
{
    // int x; //normal var //static memory allocation // at the time of compilation
    // int *y; // pointer var
    // cout<<sizeof(x)<<"\t"<<sizeof(y);
    // y = (int*)malloc(sizeof(int)) //run-time memory allocation // dynamic allocation in c
    // y = new int(10.5); //dynamic memory for y
    // cout<<*y;
    int *y;
    y = new int[10]; // 10 integer ki memory allocation
    y[0] = 1;        //*(z+0)
    y[1] = 2;        //*(z+1)
    *(y + 2) = 3;
    for (int i = 0; i < 3; i++)
    {
        cout << y[i] << "\t" << *(y + i) << "\n";
    }
    // delete
    int *a;
    a = new int(10);
    delete a;
    delete y;
    cout << y[2];
    cout << y[1];
    struct abc first;//static
    abc *p;
    p=new abc;
    p->a=10;
    p->b=33.3;
    cout<<p->a<<p->b;
}