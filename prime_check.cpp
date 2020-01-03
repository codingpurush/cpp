#include<iostream>
using namespace std;

int main()
{

    int i{2},n{0};
    cout << "Enter the number : ";
    cin >> n;

    while(i<n){
        if (n%i==0)
        {
            cout << "not prime" << endl;
            break;
        }
        else
        {
            cout << "prime" << endl;
            break;
        }
        i=i+1;
    }
}
