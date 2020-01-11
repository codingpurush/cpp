#include<iostream>
#include<cmath>
using namespace std;
void quadeqn(int a, int b, int c)
{
     int d  = b*b - 4*a*c;
     double sqrt_val = sqrt(abs(d));

     if (d > 0) cout << (double)(-b + sqrt_val)/(2*a) << endl << (double)(-b - sqrt_val)/(2*a);

     else if (d == 0) cout << "same roots : " << -(double)b / (2*a);

     else cout << "I dont know how to calculate this.";
}

int main()
{
    int a,b,c;
    cout << "Enter 3 numbers: ";
    cin>>a>>b>>c;
    cout << endl;
    quadeqn(a, b, c);
    return 0;
}
