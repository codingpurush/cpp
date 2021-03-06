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

1
23
456
78910

1
22
303
4004
50005
600006
7000007

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

/// For the fourth pattern another variable needs to be defined named counter (k), print k and increment it.
/// Code:
#include<iostream>
using namespace std;

int main ()
{
    int n{0};
    cout << "Enter number of lines: " << endl;
    cin >> n;

    int i{1},j;
    int k{1};

    while (i<=n){
        j=1;          /// j is initialized every time before it is checked
        while (j<=i){
            cout << k;
            j=j+1;
            k=k+1;
        }
        cout << endl;
        i=i+1;
    }
    return 0;
}

///Another approach for 4 pattern

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
            cout << i*(i+1)/2+j;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
    return 0;
}

///For pattern 5

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
                if (j==1 || j==i)
                    cout << i;
                else
                    cout << 0;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
    return 0;
}

