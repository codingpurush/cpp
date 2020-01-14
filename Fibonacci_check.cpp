#include<iostream>
using namespace std;

int main()
{
    int n,a=-1,b=1,c=a+b,i=1;
    cin >> n;
    while(c<n){
        ///cout << c << " ";
        a=b;
        b=c;
        c=a+b;
        i++;
        }
        if (c==n) cout << n << " is in series."; else cout << n <<" is not in series.";
}




