#include<iostream>
using namespace std;

int main()
{
    int n{0}, i {1};
    float a, avg, sum ;
    cout << "how many inputs?";
    cin  >> n;

    while (i<=n){
            cin >> a;
            sum=sum+a;
            i=i+1;
    }
    
    cout << "The sum is "<< sum << endl;
    avg = sum/n;
    cout << "The avg is "<< avg;
    
    return 0;
}
