#include <iostream>
using namespace std;

int main(){
    
    int n; cin>>n;
    
    for (int i=1;i<=2*n-1;i=i+1){
        int iJaisa;
        if (i<=n) iJaisa=i; else iJaisa=2*n-i;
        
        for (int j=1;j<=n-iJaisa;j=j+1){
            cout<<"  ";
        }
        
        for (int j=1;j<=2*iJaisa-1;j=j+1){
            cout<<"* ";
        }
        
        cout<<endl;
    }
}
