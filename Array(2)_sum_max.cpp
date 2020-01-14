/// This code takes input of number of elements and makes an array. It prints the sum of elements and the MAX number.

#include<iostream>
using namespace std;

int SumArr(int arr[], int n){
    int sum=0;
    for (int i=0;i<n;i++) sum+=arr[i];
    return sum;
}

int MaxArr(int arr[],int n){
    int ans=arr[0];
for (int i=1;i<n;i++){
        if (ans<arr[i]) ans=arr[i];
        }
        return ans;
}


int main()

{
    int a; cout << "number of elements: "; cin>>a;
    int arr[100];
    for (int i=0; i<a; i++) cin >> arr[i];
    cout <<"sum = "<< SumArr(arr,a) << "\n";
    cout <<"max = "<< MaxArr(arr,a);
    return 0;

}
