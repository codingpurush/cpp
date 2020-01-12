#include<iostream>
using namespace std;

int factorial(int n){
    int f=1;
    for (int i=1;i<=n;i++) f*=i;
    return f;
}

int ncr(int n,int r){
    return factorial(n)/factorial(r)/factorial(n-r);
}

    int main()
    {

        int n; cin>>n;
        for (int i=0; i<=n; i++){
            for (int j=0; j<=i; j++)
                cout << ncr(i,j);
            cout << endl;

        }
}

/* Else we would have to init. fi, fj, fij;
       for (int k=1;k<=i;k++) fi=fi*k;
           for (int k=1;k<=j;k++) fj=fj*k;
             for (int k=1;k<=i-j;k++) fij=fij*k;
              fi=Factorial(i);
             fj=Factorial(j);
             fij=Factorial(i-j);
            cout<<fi/(fj*fij)<<" ";
            
*/




