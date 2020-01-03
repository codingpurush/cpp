///This code prints the Fibonacci till N th term and also prints their sum.

#include<iostream>
using namespace std;

int main()
{
    int n{0}, a{0}, b{1}, c=a+b , sum{0};
    cin >> n;

    cout <<a<<" "<<b<<" ";

    int i{2};               /// i is counting the number of terms printed 
    while(c <= n){
        cout << c << " ";
        sum=sum+c;          
        a=b;
        b=c;
        c=a+b;
        i++;
    }

    cout << "\n";
    cout << "Number of terms printed : " << i << endl;
    cout << "The sum of this series is : "<< sum+1 << endl;
    return 0;


}
