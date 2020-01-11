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






