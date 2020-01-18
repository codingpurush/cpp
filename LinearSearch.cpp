/// Code :

#include<iostream>
using namespace std;

int main()
{
    int n,i,res=0; cin>>n;
    int arr[]={1,5,3,6,4,8,9};
    int x=sizeof(arr)/sizeof(arr[0]);

    for (i=0;i<x;i++){
          if(arr[i]==n){
              res=1;
              break;
              }
          }

        if (res==0) cout << "not found"; else cout << "At index = " << i;

    }

/// Function :

#include<iostream>
using namespace std;

int lsearch(int arr[],int x,int n)
{
    for(int i=0;i<x;i++){
        if (arr[i]==n)
            return i;
    }
    return -1;
}

int main()
{
    int n;cin>>n;
    int arr[]={1,4,6,7,11,9};
    int x=sizeof(arr)/sizeof(arr[0]);
    cout << lsearch(arr,x,n);
    return 0;
}

