/*

1 2 3 4 5
1 2 3 4 *
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *

*/
#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int i = 1;

   for (i=1; i<=n; i++){
        int j=1;
        for (j=1; j<=n-i+1; j++) cout << j << " ";

        for (int k=1; k<=2*i-3; k++) cout << "* ";
        cout << endl;

    }

}
