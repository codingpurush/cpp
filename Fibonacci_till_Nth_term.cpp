///This code prints the Fibonacci till N th term and also prints their sum.

#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int a=-1,b=1,c=a+b,i=0,sum=0;
    while(c<=n){
        cout << c << " ";
        i++;
        sum+=c;
        a=b;
        b=c;
        c=a+b;
    }
    cout << endl;
    cout << "Number of terms printed = "<<i<<"\n";
    cout << "sum is = "<<sum;
}
