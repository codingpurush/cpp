#include<iostream>
using namespace std;

int main()
{
    int n; cin>> n;
    int a=-1,b=1,c=a+b,i;

    for (i=1; i<n; i++){   /// If don't wanna count 0 as 1st term put i=0.
        a=b;
        b=c;
        c=a+b;
    }
    if (i==n) cout << c ;
}
