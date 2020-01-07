/*

  1
 232
34543
 232
  1
  
  */
  
#include<iostream>
using namespace std;

int main()
{
    int n ; cin >> n;
    int ijaisa;

    for (int i=1; i<=2*n-1; i++){                       ///Total lines
            /// for each line
            if (i<=n) ijaisa=i; else ijaisa=2*n-i;
        ///spaces
        for(int j=1; j<=n-ijaisa; j++) cout << " ";
        ///number series increasing
        for(int j=ijaisa; j<=2*ijaisa-1; j++) cout << j;
        ///number series decreasing
        for(int j=2*ijaisa-2; j>=ijaisa; j--) cout << j;
        cout << endl;
    }

}
