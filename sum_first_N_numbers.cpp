#include<iostream>
using namespace std;
/// printing sum of first N numbers.
int main()
{
        int a{0},i{1},sum{0};  
        
        cout << "Enter the number till which sum is to be calculated : "<<endl;
        cin >> a;
        
        while(i<=a){
                sum += i;
                i += 1;
        }
        
        cout << "The sum is " << sum;
        return 0;
}
