#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	int n; cin >> n;
	int a1[x];
	for(int i=0; i<n; i++){
		cin >> a1[i];
	}
	int y; cin >> y;
	for(int i=0; i<n;i++){
		if(a1[i]==y)
		{
			a1[i]==a1[i+1];
		}
	}
	for(int i=0; i<n-1; i++){
		cout << a1[i] << " ";
	}
	return 0;
}