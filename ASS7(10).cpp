#include<iostream>
using namespace std;

int twins(string str,int x)
{
     if(str[x]=='\0'||str[x+1]=='\0')
          return 0;
     if(str[x]==str[x+2])
          return 1 + twins(str,x+1);
     return twins(str,x+1);
}
int main()
{
     string str;
     cin>>str;

     cout<<twins(str,0);
}
