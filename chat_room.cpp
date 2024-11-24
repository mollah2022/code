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
           int cnt = 0;

           tst{
                int n,m; cin >> n >> m;

                int bujchi = m - n;

                if( bujchi >= 2 ){
                  cnt++;
                }
           }
           cout << cnt << endl;
  return 0;
}