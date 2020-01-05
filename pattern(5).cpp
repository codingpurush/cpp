/*
    1
  2 3 2
3 4 5 3 4

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=1;

    while(i<=n)
    {
        int j=1;
        while(j <= n-i){            ///spaces
                cout << " ";
                j++;
        }

        j=i;                        /// Increasing numbers
        while(j <= 2*i-1){
            cout << j;
            j++;
        }

        j=2*i-2;                     /// J is init. to highest number 
        while(j >= i){               /// Decreasing number
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;

}
