#include<iostream>

using namespace std;

int main()
{
    int n , max = INT_MIN;
    cin >> n;

    for (int i=1; i<=n; i++){
            int a; cin>>a;
            if (a>max) max=a;
        }
    cout << max;
    return 0;
}
