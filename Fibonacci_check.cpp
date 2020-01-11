///This code prints the Fibonacci till N th term and also prints their sum.

#include<iostream>
using namespace std;

int main()
{
    int n{0}, a{0}, b{1}, c=a+b , sum{0};
    cin >> n;

    cout <<a<<" "<<b<<" ";

    int i{2};               /// i is counting the number of terms printed
    while(c<n){
        cout << c << " ";
        sum=sum+c;
        a=b;
        b=c;
        c=a+b;
        i++;
    }
    cout << endl;
    if(c==n) cout <<n<<" IS IN SERIES."; else cout <<n<< " IS NOT IN SERIES.";
    cout << "\n";
}
