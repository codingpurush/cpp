#include<iostream>
using namespace std;

int main()
{
    int n{0}, p{0};
    cin >> n >> p;

    float ans = 0;
    float inc = 1;
    int times = 0;     ///p times for p places

    while (times<=p){

        while(ans*ans<=n){
            ans=ans+inc;
        }
            ans=ans-inc;
            inc=inc/10;
            times++;
    }
    cout<<ans<<endl;
    return 0;

}

