#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int ijaisa;

    for(int i=1; i<=2*n-1; i++)

    {
        if (i<=n)
            ijaisa=i;
        else
            ijaisa=2*n-i;

        /// Spaces
        for(int j=1; j<=n-ijaisa; j++){
            cout << "  ";
        }

        /// Stars
        for(int k=1; k<=2*ijaisa-1; k++){
            cout << "* ";
        }

        cout << endl;
    }

}

