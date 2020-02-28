#include<iostream>
#include<string.h>
using namespace std;
void charend(char *inp, int i, int l)
{
    if(i>=l){
        return;
    }
    char x=inp[i];
    if(x!='x'){
        cout<<x;
    }
    charend(inp,i+1,l);
    if(x=='x'){
        cout<<x;
    }
    return;
}
int main() {
    char inp[1000];
    cin>>inp;
    int l = strlen(inp);
    charend(inp,0,l);

}
