#include<iostream>
using namespace std;

int main()
{

    int n,j;   /// j should be available globally otherwise error in line 16 because if j is defined in line 11 then when for loop ends
    cin >> n;  /// scope of j also ends.
    
    for (int i=2; i<=n; i++){
        for (j=2; j<i; j++){
            if (i%j==0) {
                break;
            }
        }
        if (j==i) cout<< i <<" ";
    }

}
