//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";
#define mod 1000000007
 
int32_t main(){
    
           FAST

             int n; cin >> n;

             int ans = 1;

             for( int i = 0; i < n; i++ ){
                   
                   ans *=2;
                   ans %=mod;
             }

             cout << ans << endl;
  return 0;
}