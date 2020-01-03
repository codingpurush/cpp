///This code prints the fibonacci of N terms and also prints their sum.

#include<iostream>
using namespace std;

int main()
{
    ///Fibonacci series of N terms.

    int n{0}, a{0}, b{1}, c=a+b , sum{0};
    cin >> n;

    cout <<a<<","<<b<<",";

    int i{2};           /// If f0 = 0, f1 = 1, f2 = 1, f3 = 2, f4 = 3, f5 = 5 put 1, it will run one more time 
    while(i<n){         /// as i keeps count of no. of terms
        sum=sum+c;
        cout << c << " ";
        a=b;
        b=c;
        c=a+b;
        i++;
    }

    cout << "\n \n";
    cout << "Number of terms printed : " << i<<endl;
    cout <<"The sum of this series is : "<< sum+1;
    return 0;


}
