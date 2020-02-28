#include <bits/stdc++.h>
using namespace std;

int sumdigits(int n)
{
    if (n == 0)
    return 0;
    return (n%10+sumdigits(n / 10));
}

int length(char input[]){
	int len = 0;
	for(int i =0;input[i] != '\0';i++){
		len++;
	}
	return len;
}


int stringToNumber(char input[], int last)
{
	if(last == 0){
		return input[last] - '0';
	}

	int smallAns = stringToNumber(input,last-1);
	int a = input[last] - '0';
	return smallAns * 10 + a;
}

int stringToNumber(char input[]){
	int len = length(input);
	int n = stringToNumber(input,len-1);
    return sumdigits(n);
}

int main(){
	char input[50];
	cin>>input;
	cout<<stringToNumber(input)<<endl;
    return 0;
}
