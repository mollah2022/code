#include<bits/stdc++.h>
using namespace std;

string largestcommonsub(string s1,string s2){
	int m = s1.size();
	int n = s2.size();
	vector<vector<int>>dp(m+1,vector<int>(n+1,0));
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(s1[i-1]==s2[j-1]){
				dp[i][j] = dp[i-1][j-1]+1;
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	int i = m, j = n;
	string lcs = "";
	while(i>0 && j>0){
		if(s1[i-1]==s2[j-1]){
			lcs = s1[i-1]+lcs;
			i--;
			j--;
		}
		else if(dp[i-1][j] > dp[i][j-1]){
              i--;
		}
		else{
			j--;
		}
	}
	return lcs;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1,s2,lcs; cin >> s1 >> s2;
	lcs = largestcommonsub(s1,s2);
	cout << lcs.size() << endl << lcs << endl;
	return 0;
}