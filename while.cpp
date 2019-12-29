#include<iostream>
using namespace std;
int main()
{
    /// print a number N times.
    int a{0},n{0},i{1};    ///  initialize counter i
    cin >> a >> n;

    while (i<=n){          ///  check counter condition
        cout << a << endl;
        i+=1;              ///  incrementing counter
    }
    return 0;

}
