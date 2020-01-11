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
#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    int n,m,digit;
     cin>>n;
    int osum=0,esum=0,cnt=0;
    m=n;
    while(m!=0){
        cnt+=1;
        m=m/10;
    }
    cout << cnt;

    while (n!=0){
        digit = n/(int)pow(10,cnt-1);
        if (cnt%2)
            osum+=digit;
        else
            esum+=digit;
        n=n%(int)pow(10,cnt-1);
        cnt--;
    }
    cout << "odd sum = "<<osum;
    cout << "even sum = "<<esum;
}

