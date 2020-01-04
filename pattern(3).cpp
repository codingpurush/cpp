/*

   *
  **
 ***
****

*/

/*
    1
   123
  12345
 1234567
123456789
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

        ///stars
        int number = 1;
        while (number<=i){
            cout << "*"<< "";
            number++;
        }

        cout << endl;
        i++;
    }
}

