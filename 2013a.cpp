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
                int n; cin >> n;
                int x,y; cin >> x >> y;

                int cnt = 0;

               int mn = min(x,y);

               cnt = ceil((double)n/mn);

                cout << cnt << endl;
           }
  return 0;
}