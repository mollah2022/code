//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int solve(int p,int y){
     if(p<1)
        return y;
     else
     return solve(p-1,p+y);
}

int32_t main(){
           FAST
            int n; cin >> n;
            int y = 2;
            cout << solve(n,y) << endl;
  return 0;
}