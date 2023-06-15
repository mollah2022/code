#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll func(ll n)
{
    ll sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}


int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,ans,cnt=1,sum=0;
    string s,s1;
    cin>>s;
    if(s.size()!=1)
    {
        for(i=0; i<s.size(); i++)
        {
            sum+=(s[i]-'0');
        }

        while(sum>=10)
        {
            ans=sum;
            sum=func(ans);
            cnt++;
        }
        cout<<cnt<<endl;
    }
    else
        cout<<"0"<<endl;


    return 0;
}