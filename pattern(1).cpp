/*

*
**
***         /// cout << "*";
****
*****

1
12
123         /// cout << j;
1234
12345

1
22
333         /// cout << i;
4444
55555

*/

#include<iostream>
using namespace std;

int main ()
{
    int n{0};
    cout << "Enter number of lines: " << endl;
    cin >> n;

    int i{1},j;

    while (i<=n){
        j=1;          /// j is initialized every time before it is checked
        while (j<=i){
            cout << "*";
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
    return 0;
}
