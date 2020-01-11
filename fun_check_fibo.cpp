#include<iostream>
using namespace std;

bool IsFibo(int n){
int a{0}, b{1}, c=a+b;

    cout <<a<<" "<<b<<" ";
    while(c<n){
        cout << c << " ";
        a=b;
        b=c;
        c=a+b;
    }
    cout << endl;
    if(c==n) return true; else return false;

}

    int main()
    {
        int n; cin>>n;
        cout << IsFibo(n);
    }
