#include<bits/stdc++.h>
using namespace std;

int ans[1002];
int var[3002];

int main()
{
    int t,n;
    for(int i=2;i<3000;i++)
    {
        if(var[i]==0)
        {
            for(int j=2*i ; j<3000;j+=i)
                var[j]++;
        }
    }

    for(int i=30,j=0;i<=3000&&j<=1000;i++)
    {
        if(var[i]>=3)
            ans[++j]=i;
    }

    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<ans[n]<<endl;
    }
}
