#include<iostream>
using namespace std;

int main()
{
    int n,a=-1,b=1,c=a+b,i=1;
    cin >> n;
    while(i<n){
        ///cout << c << " ";
        a=b;
        b=c;
        c=a+b;
        i++;
        }
        if (i==n) cout << c; else cout << "no";
}




