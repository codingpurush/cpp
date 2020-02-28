#include<iostream>
using namespace std;

int length(char arr[]){
	int len = 0;
	for(int i =0;arr[i]!='\0';i++){
		len++;
	}
	return len;
}


void duplicateStar(char arr[],int start){
	if(arr[start]=='\0'){
		return;
	}

	duplicateStar(arr,start+1);
	if(arr[start] == arr[start+1]){
		int l = length(arr);
		arr[l+1] = '\0';
		int i;
		for(i = l-1;i>=start +1;i--){
			arr[i+1] = arr [i];
		}
		//putting *
		arr[start+1] = '*';
	}
}

int main()
{
	char ch[50];
	cin>> ch;

	duplicateStar(ch,0);
	cout<<ch<<endl;

	return 0;
}
