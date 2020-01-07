/*

*
**
*
***
*
****

*/

#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    for (int i=1; i<=2*n; i++){

        if (i%2!=0) cout << "*";
        else
            for (int j=1; j<=i/2+1; j++) cout << "*";
        cout << endl;

    }

}
