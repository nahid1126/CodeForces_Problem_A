#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,co=0;
    cin>>n>>k;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    } for(int i=0;i<n;i++){
        if(num[i]>=num[k-1]&&num[i]>0){
          co++;
        }
    }

    cout<<co<<"\n";
    return 0;
}
