//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";
 
int32_t main(){
    
           FAST
           tst{
                int n,m,k; cin >> n >> m >> k;

                if( n+m == k || m+k == n || n+k == m ) cout <<"YES\n";
                else cout <<"NO\n";
           }
  return 0;
}