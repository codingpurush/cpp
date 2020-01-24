#include<iostream>
using namespace std;

int main(){
    int m=2,n=4;
    int arr[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Normal Print"<<endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose print:"<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
