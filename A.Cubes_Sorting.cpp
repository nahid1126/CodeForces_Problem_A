#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        int Array[m];
        for(int i=0; i<m; i++)
        {
            cin>>Array[i];
        }
        int count=0;
        for(int i=1; i<m; i++)
        {
            if(Array[i]>=Array[i-1])
            {
                count++;
                break;
            }
        }
        count?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}
