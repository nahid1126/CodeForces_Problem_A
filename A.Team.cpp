#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,co=0;;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            co++;
        }
    }
    cout<<co<<"\n";
}
