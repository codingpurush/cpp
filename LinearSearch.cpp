/// Code :

#include<iostream>
using namespace std;

int main()
{
    int n,i,res=0; cin>>n;
    int arr[]={1,5,3,6,4,8,9};
    int x=sizeof(arr)/4;

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

int linearsearch(int arr[],int n,int x)
{
    int i;
    for (i=0;i<n;i++)
        if (arr[i]==x)
            return i;
    return -1;
}

int main()
{
    int arr[] = {3,4,1,7,5};
    int n = sizeof(arr)/4;
    int x;cin>>x;
    cout << linearsearch(arr,n,x);
    return 0;
}


