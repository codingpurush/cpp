/*#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    ///input
    for (int i=0;i<n;i++) cin>>arr[i];
    for (int i=0;i<n;i++) cout<<arr[i]<< " ";cout << endl;

    for (int i=n-1;i>=0;i--) cout << arr[i] << " ";

}
*/
#include<iostream>
using namespace std;

int sumarr(int arr[], int n){
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
    int a; cin>>a;
    int arr[100];
    for (int i=0; i<a; i++) cin >> arr[i];
    cout <<"sum = "<< sumarr(arr,a) << "\n";
    cout <<"max = "<< MaxArr(arr,a);
    return 0;

}
