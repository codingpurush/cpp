#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "enter a binary number : ";
    cin>>n;
    int i=1;
    float pv=0,ans=0;

    while(n!=0){

            int d=n%10;
            ans=ans+d*pow(2,pv);
            n=n/10;
            pv++;
    }
    cout << "Decimal = " << ans;
}

///Function:

#include<iostream>
#include<cmath>
using namespace std;


int bin_to_dec(int n){
    int i=1;
    float pv=0,ans=0;

    while(n!=0){

            int d=n%10;
            ans=ans+d*pow(2,pv);
            n=n/10;
            pv++;
    }
    cout << "Decimal = " << ans;
}

int main()
{
    int n; cout << "Enter a binary number : "; cin>>n;
    bin_to_dec(n);

}
