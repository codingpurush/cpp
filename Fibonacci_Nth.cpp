#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a=0,b=1;
    for(int i=1;i<n;i=i+1){      /// you can use i=0 if you don't wanna include 0 and start counting from 1.
        ///cout<<a<<" ";
        int s=a+b;
        a=b;
        b=s;
    }
    cout<<a;
}
