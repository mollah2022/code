//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int solve(int n){
     if(n==1){
        return 1;
     }
     else{
         return 1+solve(n/2);
     }
}

int32_t main(){
           FAST
           int n; cin >> n;
          cout << solve(n) <<endl;
  return 0;
}