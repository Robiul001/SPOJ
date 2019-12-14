#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin>>p;
    while(p--)
    {
        /// One Solution
        unsigned long long int n,k,m,sum=1,ans=0;
        cin>>n>>k>>m;
        if(n>m)
            cout<<0<<endl;
        else
        {
            while(sum<=(m/n))
            {
                sum = sum*k;
                if(sum<=(m/n))
                    ans++;
            }
            cout<<ans<<endl;
        }
        /// Another Solution
//        long long int n,k,m;
//        double ans;
//        cin>>n>>k>>m;
//        if(n>=m)
//            cout<<0<<endl;
//        else
//        {
//            ans = log(m/n)/log(k);
//            ans = (int)ans;
//            cout<<ans<<endl;
//        }
    }
    return 0;
}
