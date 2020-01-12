#include<iostream>
#include<cmath>
using namespace std;
bool quadeqn(int a, int b, int c,float &r1, float &r2)
{
     int d  = b*b - 4*a*c;

     if (d>=0)
     {
         r1=(-b+sqrt(d))/(2*a);
         r2=(-b-sqrt(d))/(2*a);
         return true;
     }

     else
        return false;
}

int main()
{
    float a,b,c,r1,r2;
    cout << "Enter 3 numbers: ";
    cin>>a>>b>>c;
    cout << endl;
    if (quadeqn(a, b, c ,r1 ,r2))
        cout<<"Roots: "<<endl<<r1<<endl<<r2;
        else
            cout<<"No Solution.";
    return 0;
}
