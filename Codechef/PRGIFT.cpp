#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,con=0,a;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
                con++;

        }
        if(k==0 && con==n)
            cout<<"NO";
        else
            (con>=k)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
    return 0;
}
