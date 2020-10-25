#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k,l,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>k>>l;
        int array[k],ans=0;
        for(int i=0; i<k; i++)
        {
            cin>>array[i];
        }
        sort(array,array+k);
        for(int i=1; i<k; i++)
        {
            if(array[i]>=l)
            {
                continue;
            }
            else
            {
                ans+=(l-array[i])/array[0];
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}

