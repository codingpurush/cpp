#include<iostream>
using namespace std;

int main()
{
    int n; cin>> n;
    int a=-1,b=1,c=a+b;

    while(c<n){
        a=b;
        b=c;
        c=a+b;
    }
    if (c==n) cout << "yes" ; else cout << "no" ;
}
