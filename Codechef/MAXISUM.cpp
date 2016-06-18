#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,sum=0,ma;
        cin>>n>>k;
        ll a[n],b[n],temp;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            sum+=a[i]*b[i];
        }
        ma=sum;
        for(int i=0;i<n;i++)
        {
           if(b[i]<0)
                temp=(a[i]-k)*b[i];
           else
                temp=(a[i]+k)*b[i];
           ma=max(ma,(sum-(a[i]*b[i])+temp));
        }
        cout<<ma<<endl;
    }
    return 0;
}
