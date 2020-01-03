#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

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
