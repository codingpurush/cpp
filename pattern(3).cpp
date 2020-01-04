/*

   *
  **
 ***
****

    1
   12
  123
 1234
12345

*/


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

        ///stars or numbers
        int number = 1;
        while (number<=i){
            cout << "*"<< "";     /// for second pattern print number.
            number++;
        }

        cout << endl;
        i++;
    }
}

