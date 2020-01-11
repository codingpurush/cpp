#include<iostream>
using namespace std;

int main()
{
    int n,ans=0; cin >> n;

    for (int i=n,pv=1;i>0;i/=2,pv*=10){
            int d=i%2;
            ans=ans+d*pv;
    }
    cout << ans;
}
