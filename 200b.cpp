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
           ll sum = 0;
            int n; cin >> n;
            for( int i = 1; i <= n; i++ ){
              int m; cin >> m;
              sum += m;
            }
           double ans = (double)sum/n;

           cout << fixed << setprecision(12) << ans << endl;
  return 0;
}