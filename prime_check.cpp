#include<iostream>
using namespace std;

int main()
{

    int i{2},n{0};
    cout << "Enter the number : ";
    cin >> n;

    for(int i =2; i<n; i++){
        if (n%i==0){
            cout << "not prime";
            return 0;
        }
    }
    cout<<"prime";

}
