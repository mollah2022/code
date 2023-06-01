#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<int>v1;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
    
    int x=v1.size();
    cout<<x<<endl;

	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;

	cout<<"FRONT && BACK VALUE::<<"<<endl;
	int l=v1.front();
	cout<<l<<endl;

	int k=v1.back();
	cout<<k<<endl;

	cout<<x<<endl;
    if(v1.empty())
    {
    	cout<<"EMPTY\n";
    }
    else
    {
    	cout<<"NOT EMPTY\n";
    }

	v1.clear();
	cout<<v1.size()<<endl;
	  if(v1.empty())
    {
    	cout<<"EMPTY\n";
    }
    else
    {
    	cout<<"NOT EMPTY\n";
    }
	


 return 0;
}