#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,a,b,sum=0,x=4;
    cin>>t;
    while(t--){
        cin>>a>>b;
        sum=(x^a)^(x^b);
        cout<<sum<<"\n";
    }
    return 0;
}
