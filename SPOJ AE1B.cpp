#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s,arr[1005];
    long long int sum=0,table,cnt=0;
    cin>>n>>k>>s;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    table = k*s;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        cnt++;
        if(sum>=table)
            break;
    }
    cout<<cnt<<endl;
    return 0;
}
