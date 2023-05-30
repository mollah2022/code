#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;

   int  mx=INT_MIN;

    int s1[x];
    for(int i=0;i<x;i++)
    {
        cin >> s1[i];
    }
    for(int i=0;i<x;i++)
    {
        mx=max(mx,s1[i]);
        cout<<mx<<endl;
    }
    return 0;
}