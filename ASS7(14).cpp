#include<iostream>
#include<cstring>
using namespace std;
string bw(string,int);
int main(){
    int i=0;
string str,temp=" ";
cin>>str;

temp=bw(str,i);
    cout<<temp;

}
string bw(string str,int i){
    string temp="";
    if(str[i]=='('){
        int j=0;
        for(int k=i+1;str[k]!=')';k++){
            temp+=str[k];
        }
      
        return temp;
       }
       else{
        return bw(str,i+1);
       }
}
