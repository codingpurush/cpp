#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    for (int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}

int NCR(int n, int r){
    return factorial(n)/factorial(r)/factorial(n-r);
}

int main()
{
    int n; cin >> n;
    int r; cin >> r;
    cout << n << "c" << r << " is ";
    cout << NCR(n,r);
}    
    
  
