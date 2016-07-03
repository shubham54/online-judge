#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length(),l=0,r=0,Z[n+1],k;
    for(int i=1;i<n;i++){
        if(i>r){
            r=l=i;
            while(r<n && s[r]==s[r-l]){
                r++;
            }
            Z[i]=r-l;
            r--;
        }
        else{
            k=i-l;
            if(Z[k]<r-i+1){
                Z[i]=Z[k];
            }
            else{
                l=i;
                while(r<n && s[r]==s[r-l]){
                    r++;
                }
                Z[i]=r-l;
                r--;
            }
        }
    }
    int ans=-1,ma=0;
    for(int i=1;i<n;i++){
        if(Z[i]==n-i && ma>=n-i){
            ans=n-i;
            break;
        }
        ma=max(ma,Z[i]);
    }
    if(ans==-1){
        cout<<"Just a legend"<<endl;
    }
    else{
        cout<<s.substr(0,ans)<<endl;
    }
    return 0;
}
