#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the coefficients of x^2,x and constant";
    int a,b,c;
    cin>>a>>b>>c;
    double d = b*b-4*a*c;
    if(d<0){
        cout<<"Imaginary roots";
    }
    else if(d==0){
        cout<<"x ="<<-b/2*a;
    }
    else{
        double m1 = (-b + sqrt(d))/(2*a);
        double m2 = (-b - sqrt(d))/(2*a);
        cout << "x1 = " << m1 << "; x2 = " << m2;
    }
    return 0;
    
}