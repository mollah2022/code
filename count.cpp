#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,count=0;
	cin >> t;
	   while(t--)
	   {
	   string s1;
	   getline(cin,s1);
	  int a=s1.size();
	   for(i = 0;i < a;i++)
	   {
	   	if(s1[i]=' ')
	   		count++;
	   }
	   cout<<count<<endl;
	   count=0;
	}
	return 0;
}