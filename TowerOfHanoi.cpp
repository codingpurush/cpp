#include<iostream>
using namespace std;

int fact(int n){
if (n==0) return 1;
return n*fact(n-1);
}

int TOH(int n,char source,char dest,char with_help)
{
    if (n==1) {
        cout<<source<<" to "<<dest<<endl;
        return 0;
        }

    TOH(n-1,source,with_help,dest) ;
    cout<<source<<" to "<<dest<<endl;
    TOH(n-1,with_help,dest,source);
}

int main()
{
    cout<<TOH(2,'A','B','C');

}
