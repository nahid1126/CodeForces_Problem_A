#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string line;
    while(n--)
    {
        cin>>line;
        if(line.length()>10)
        {
            cout<<line[0]<<line.length()-2<<line[line.length()-1]<<"\n";
        }
        else
        {
            cout<<line<<"\n";
        }
    }
    return 0;
}
