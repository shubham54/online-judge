#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s>>s1;
        int con[26]={0},con1[26]={0},flag=0;
        for(int i=0;i<s.length();i++)
            con[s[i]-'a']++;
        for(int i=0;i<s1.length();i++)
            con1[s1[i]-'a']++;
        for(int i=0;i<26;i++)
        {
            if(con[i]>0 && con1[i]>0)
            {
                flag=1;break;
            }
        }
        if(flag==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
