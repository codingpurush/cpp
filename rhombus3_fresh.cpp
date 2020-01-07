#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int spaces=n-1 , stars=1;

    for (int i=1;i<=2*n-1;i=i+1){
        for (int j=1;j<=spaces;j=j+1) cout<<"  ";
        for (int j=1;j<=stars;j=j+1) cout<<"* ";

        cout<<endl;

        if (i<n){
            stars=stars+2;
            spaces=spaces-1;
            }

        else {
            stars=stars-2;
            spaces=spaces+1;
          }
    }
}
