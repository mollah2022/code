#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	list < int > li;
	int n; cin >> n;
	for(int i=0;i<n;i++){
		int y; cin >> y;
		li.push_back(y);
	}

	list < int > ::iterator it;
	for(it = li.begin();it!=li.end();it++){
		cout << *it << " ";
	}
	cout << endl;
	for(auto it : li){
		cout << it <<" ";
	}
	cout << endl;
	li.push_front(2);

	for(it = li.begin();it!=li.end();it++){
		cout << *it << " ";
	}
	  cout << endl;
	  cout << li.front() << endl;
	  cout << li.back() << endl;
	  li.pop_front();
	  li.pop_back();
	  for(auto it : li){
		cout << it <<" ";
	}
	cout << endl;
	cout << li.size() << endl;
	 it = li.begin();
	 advance(it,3);
	 li.insert(it,2,-7);
	   for(auto it : li){
		cout << it <<" ";
	}
	cout << endl;
	it = li.begin();
	advance(it,3);
	li.erase(it);
	  for(auto it : li){
		cout << it <<" ";
	}
	cout << endl;
	li.sort();
	li.unique();
		  for(auto it : li){
		cout << it <<" ";
	}
	cout << endl;

	return 0;
}