#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int n; cin >> n;
    vector<int>v1;
    for(int i=0;i<n; i++){
    	int y; cin >> y;
    	v1.push_back(y);
    }
    for(int i=1;i<n; i++){
    	int temp = v1[i];
    	int j = i-1;
    	while(j>=0 && v1[j]>temp){
    		v1[j+1] = v1[j];
    		j--;
    	}
    	v1[j+1] = temp;
    }
    for(int i=0;i<n;i++){
    	cout << v1[i] << " ";
    }
    cout << endl;
    return 0;
}