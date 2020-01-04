/*
    1
   123
  12345
 1234567
123456789

    *
   ***
  *****
 *******
*********

*/

#include<iostream>
using namespace std;

int main()
{
    int n{0}, i{1};
    cin >> n;

    while (i<=n)   ///i denotes row number.
    {
        ///spaces
        int space = 1;
        while (space<=n-i){
            cout << " ";
            space++;
        }

        ///numbers
        int number = 1;
        while (number<=2*i - 1){       
            cout << number<< "";        /// for second pattern print "*"
            number++;
        }

        cout << endl;
        i++;
    }
}
