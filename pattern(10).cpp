/*

*       *
 *     *
  *   *
   * *
    *
    
*/

#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    for (int i=1; i<=n; i++){
            for (int j=1; j<=i-1; j++) cout << " ";
            cout << "*";                                    /// In last line one * has already been printed
            for (int k=1; k<=2*(n-i)-1; k++) cout << " ";
            if (i<n) cout << "*";
            cout << endl;
    }

}
