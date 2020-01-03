#include<iostream>
using namespace std;

int main()
{
    int n{0}, sum{0}, c;
    cin >> n;

    while (n!=0)
        {
            c=n%10;
            sum = sum+c;
            n=n/10;
        }
    cout << sum;
    return 0;

}
