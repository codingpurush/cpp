/*

1*****
12****
123***
1234**
12345*

*/

#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int i = 1;

   for (i=1; i<=n; i++){
        int j=1;
        for (j=1; j<=i; j++) cout << j;

        for (int k=n-i+1; k>1; k--) cout << "*";
        cout << endl;

    }

}

