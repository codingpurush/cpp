#include<iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char str[],int s, int e)
{
    if (s == e)
    return true;

    if (str[s] != str[e])
    return false;


    if (s < e + 1)
    return isPalindrome(str, s + 1, e - 1);
    return true;
}

int main()
{
    char str[] = "geeg";
    int n = strlen(str);

    if (isPalindrome(str,0,n-1))
        cout << "Yes";
    else
    cout << "No";

    return 0;
}
