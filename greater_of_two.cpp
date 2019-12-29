#include <iostream>

using namespace std;

int main()
{
    int a{0},b{0};
    cout << "enter 2 numbers : ";
    
    cin>> a >> b;
    
    if (a>b)
        cout << a;
    
    else if (b>a)
        cout << b;
    
    else
        cout << "Both are equal";
    
    return 0;
}
