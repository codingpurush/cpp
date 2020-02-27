#include<iostream>
#include<sstream>
using namespace std;

int sumdigits(int n)
{
    if (n == 0)
    return 0;
    return (n%10+sumdigits(n / 10));
}

int main()
{
    char num[10];
    cin>>num;
    cout<<"String is  = "<<num<<endl;
    string s = num;
    stringstream number(s);
    int x = 0;
    number >> x; /// x holds number
    cout << "number = "<<x <<endl;

    cout<<"Sum is  =  "<<sumdigits(x);
    return 0;
}
