#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	// Random 2 ar besi value deya thakle max and min value ber korar niyom::
	int x,y,z,w; cin >> x >> y >> z >> w;
	int mx = max({x,y,z,w});
	int mn = min({x,y,z,w});
     cout << "RANDOM MAX AND MIN VALUE::\n";
	cout << mx << " " << mn << endl;
// ARRAY element theke max and min value ber kora::
	int n ; cin >> n;
	int a1[n];

	for(int i=0; i<n; i++)
	{
		cin >> a1[i];
	}

	int mx1 = max_element(a1,a1+n)-a1;
	int mn1 = min_element(a1,a1+n)-a1;

	cout <<"ARRAY THEKE MAX AND MIN VALUE INDEX AR VALUE::\n";

	cout << mx1 << " " << mn1 << endl;

	cout << a1[mx1] << " " << a1[mn1] << endl;

	// linear_search STL function::

	int p; cin >> p;
	int a2[p];
	for(int i=0; i<p; i++)
	{
		cin >> a2[i];
	}
   int l; cin >> l;
	int index = find(a2,a2+p,l)-a2;
    cout << "LINEAR_SEARCH VALUE FOUND OR NOT FPUND::\n";
	if(index < n)
	{
		cout << " FOUND POSITION = " << index << endl;
	}
	else
	{
		cout << "NOT_FOUND\n";
	}
   cout << "COUNT = ";
   int d ; cin >> d;
   int a3[d];

   for(int i=0; i<d; i++)
   {
   	  cin >> a3[i];
   }

   int h = count(a3,a3+d,2);
   cout << h << endl;

   cout << "SORT :\n";

   sort(a1,a1+n);
   sort(a2,a2+p);
   sort(a3,a3+d);

   for(int i=0; i<n; i++)
   {
   	    cout << a1[i] << " ";
   }
cout << endl;
   for(int i=0; i<p; i++)
   {
   	    cout << a2[i] << " ";
   }
cout << endl;
   for(int i=0; i<d; i++)
   {
   	    cout << a3[i] << " ";
   }
cout << endl;
	return 0;
}