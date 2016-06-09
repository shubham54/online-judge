#include<bits/stdc++.h>

using namespace std;

int main()
{
        int n,f;string s,s1;
        while(scanf("%d\n",&n)!=EOF){
                f=0;
        cin>>s>>s1;
        for(int j=0;j<s1.length();j++)
        {
            int flag=0;
            if(s1[j]==s[0])
            {
                for(int i=0;i<s.length();i++)
                {
                    if(s[i]!=s1[i+j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    f=1,cout<<j<<endl;
            }
        }
        if(f==0)
            cout<<endl;
        cout<<endl;
        }
    return 0;
}
