/// Approach from right side
#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int osum=0,esum=0;
    int pos=1;
    while (n!=0){
            int digit;
    digit=n%10;
    if (pos%2!=0) osum+=digit; else esum+=digit;
    n=n/10;
    pos++;
    }
    cout << "odd sum = "<<osum<<endl;
    cout << "even sum = "<<esum;
}

/// Approach from left side

/// Reverse the number + same code.

