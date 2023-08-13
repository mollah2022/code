#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int n; cin >> n;
	vector < int > v1;
	for(int i=0; i<n; i++)
	{
		int y; cin >> y;
		v1.push_back(y);
	}

	for(auto p:v1)
	{
          cout << p << " ";
	}
	cout << endl;
	int p = v1.size();
	cout << p << endl;

	int k = v1.front();
	int l = v1.back();

	cout << k << " " << l << endl;

	if(v1.empty())
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}

	v1.pop_back();

	for(auto p:v1)
	{
		cout << p <<" ";
	}
   cout << endl;

   v1.insert(v1.begin()+2,8);

   for(auto p:v1)
   {
   	  cout << p << " ";
   }

   cout << endl;

   sort(v1.begin(),v1.end());

   for(auto p:v1)
   {
   	   cout << p << " ";
   }
   cout << endl;

   reverse(v1.begin(),v1.end());
   for(auto p:v1)
   {
   	  cout << p << " ";
   }
   cout << endl;
	return 0;
}