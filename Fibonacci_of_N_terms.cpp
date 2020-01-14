///This code prints the fibonacci of N terms and also prints their sum.

#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int a=-1,b=1,c=a+b,i,sum=0;
    
    for (i=0;i<n;i++){
        cout << c << " ";
        sum+=c;
        a=b;
        b=c;
        c=a+b;
    }
    cout << endl;
    cout << "Number of terms printed = "<<i<<"\n";
    cout << "sum is = "<< sum;
}

