#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,i,j,count=0;
    cin>>n;
    for(i=1; i<=9; i++)
    {
        int sum=0;
        for(j=1; j<=4; j++)
        {
            sum=(sum*10)+i;
            count+=j;
            if(sum==n)
            {
                cout<<count<<'\n';
                return;
            }
        }
    }
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
