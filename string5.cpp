#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    string s1,word;
    getline(cin,s1);
    cout<<s1<<endl;

    istringstream sajib(s1);
    
    while(sajib>>word)
    {
    	cout<<word<<endl;
    }
   return 0;
}