#include<iostream>
#include<cmath>
using namespace std;
bool quadeqn(int a, int b, int c,float &r1, float &r2)
{
     int d  = b*b - 4*a*c;
     double sqrt_val = sqrt(abs(d));

     if (d>=0)
     {
         r1=(double)(-b + sqrt_val)/(2*a);
         r2=(double)(-b - sqrt_val)/(2*a);
         return true;
     }

     else
        cout << "I don't know how to calculate this.";
        return false;
}

int main()
{
    float a,b,c,r1,r2;
    cout << "Enter 3 numbers: ";
    cin>>a>>b>>c;
    cout << endl;
    if (quadeqn(a, b, c ,r1 ,r2))

    cout<<"Roots: "<<r1<<endl<<r2;
    return 0;
}
