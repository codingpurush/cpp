/*

@    @
@   @
@  @
@ @
@@
@ @
@  @
@   @
@    @

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i,ijaisa;


    for(i=1; i<=2*n-1; i++){
            if (i<=n) ijaisa=i; else ijaisa=2*n-i;
            cout << "@";

        ///spaces
        for (int j=1; j<=n-ijaisa; j++) cout << " ";
        /// last star
        cout << "@";

        cout << endl;
    }

}
