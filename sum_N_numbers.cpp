#include<iostream>
using namespace std;

 int main()
 {
     int n{0}, i{1}, sum{0}, a{0};
     
     cout << "Enter number of NUMBERS : "<<endl;
     cin >> n;
     
     while (i<=n){
        cin>>a;
        sum += a;
        i += 1;
     }
     
     cout << "The sum is "<<sum;
     return 0;

 }
