#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int i=1;i<=n;i=i+1){
        for (int j=1;j<=n-i;j=j+1){
            cout<<" ";
        }
        for (int j=1;j<=2*i-1;j=j+1){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for (int i=n-1;i>=1;i=i-1){
        for (int j=1;j<=n-i;j=j+1){
            cout<<" ";
        }
        for (int j=1;j<=2*i-1;j=j+1){
            cout<<"*";
        }
        cout<<endl;
    }
}
