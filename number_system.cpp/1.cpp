#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,ans=0;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
        ans=(x/10);
        if(x%10==9)
        {
        	ans++;
        }
        cout<<ans<<endl;
        ans=0;
	}
	return 0;
}