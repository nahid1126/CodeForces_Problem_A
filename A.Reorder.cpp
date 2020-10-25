#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    long long int sum=0;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<(sum==m?"YES\n":"NO\n");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}
