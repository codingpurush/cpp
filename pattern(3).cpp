/*
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "\n";

    int row = 1;
    int val = 1;

    while (row<=n)
    {
        ///printing numbers in every row
        ///count of numbers = row number

        int count = 1;
        while(count<=row)
        {

            cout << val << " ";
            val++;
            count++;
        }

        row++;
        cout << endl;

    }

      return 0;
}
