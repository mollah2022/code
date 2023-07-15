#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
    	    int a = 0,b = 0,c = 0;
    		int x,y,z,w; cin >> x >> y >> z >> w;
    		if(x<y)
    		{
                   a++;
    		}
    		if(x<z)
    		{
                   b++;
    		}
    		if(x<w)
    		{
                   c++;
    		}

    		cout << (a+b+c) << endl;
    		a = 0,b = 0,c = 0;
    }
     return 0;
}