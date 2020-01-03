#include <iostream>
using namespace std;

int main()
{
    /// sum of even numbers from 1 ...... N
    
    int n{0},i{1},sum{0};
    cout << "enter the number: ";
    cin >> n;

    while (i <= n){
        if (i%2==0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout << sum;

    return 0;
}
