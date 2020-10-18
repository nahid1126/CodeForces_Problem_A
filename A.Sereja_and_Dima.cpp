#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,d=0,turn=1;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    while(!v.empty())
    {
        if(turn==1)
        {
            if(*v.begin()>v.back())
            {
                s+=*v.begin();
                v.erase(v.begin());
            }
            else
            {
                s+=v.back();
                v.pop_back();
            }
            turn=2;
        }
        else
        {
            if(*v.begin()>v.back())
            {
                d+=*v.begin();
                v.erase(v.begin());
            }
            else
            {
                d+=v.back();
                v.pop_back();
            }
            turn=1;
        }
    }
    cout<<s<<" "<<d<<"\n";
    return 0;
}
