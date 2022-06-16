#include<iostream>

using namespace std;


class Fraction    // 4/5   7/8
{
    int num, den;

    int gcd(int num, int den)
    {
        while (num != den)
        {
            if (num > den)
                num -= den;
            else
                den -= num;
        }
        return num;
    }

    public:

    Fraction()   // Fraction f1;
    {
        cout<<"default constructor \n";
        num=0;
        den=1;
    }

    Fraction(int num, int den);  // Fraction f1(4,5);

    Fraction(const Fraction &f)    //Fraction f2(f1);    const Fraction &f
    {
       cout<<"copy constructor \n";
       num=f.num;
       den=f.den;
    }

    void print()  // 5/4
    {
        cout<<num<<"/"<<den<<"\n";
    }

    Fraction add(Fraction f1);  // f2.add(f1);
};

Fraction::Fraction(int num, int den)   // Fraction f1(5,10);  5/10   1/2
{
    cout<<"parameterized constructor called \n";
    this->num = num / gcd(num,den);
    this->den = den / gcd(num,den);
}

Fraction Fraction::add(Fraction f)
{
    Fraction res;
    res.num= num * f.den + f.num * den;
    res.den=den * f.den;

    int x=gcd(res.num,res.den);
    res.num=res.num/x;
    res.den=res.den/x;

    return res;
}
//Fraction Fraction::add(Fraction f)
//{
//    return Fraction(num * f.den + f.num * den, den * f.den);
//}



int main()
{
    Fraction f1 = {2,3};   // Fraction f1(2,3);
   // Fraction f2(f1);   //  copy constructor
    Fraction f2=f1;  //copy
//    Fraction f3;
//
//
//
//    f3=f2.add(f1);   /////


 Fraction result = f1.add(f2);   // Fraction result=f1;   Fraction f2=f1;

    cout<<"sum of ";
    f1.print();
    cout<<" and ";
    f2.print();
    cout<<" is ";

    result.print();
    return 0;
}