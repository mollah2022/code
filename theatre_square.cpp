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
           ll n,m,a; cin >> n >> m >> a;

           ll ans1 = ceil((double)n/a);
           ll ans2 = ceil((double)m/a);

           cout << ans1*ans2 << endl;
  return 0;
}