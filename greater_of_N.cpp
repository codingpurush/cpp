#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int Max=INT_MIN;
    for (int i=1;i<=n;i=i+1){
        int a; cin>>a;
        if (a>Max) Max=a;
    }
    cout<<Max;
}
/*
int main(){
    int n; cin>>n;
    int Max;
    for (int i=1;i<=n;i=i+1){     /// If first number has to be assigned max value
        int a; cin>>a;
        if (i==1) Max=a;
        else if (a>Max) Max=a;
    }
    cout<<Max;
}*/
