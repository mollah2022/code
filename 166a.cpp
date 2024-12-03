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
           int n,m; cin >> n >> m;

           vector< pair<int,int> > v1;

           for( int i = 0; i < n; i++ ){
               int a,b; cin >> a >> b;
               a = a*(-1);
               v1.push_back({a,b});
           }

           sort(v1.begin(),v1.end());

           int cnt = 0;

           for( auto u : v1 ){
               if( u == v1[m-1] ){
                  cnt++;
               }
           }

           cout << cnt << endl;
  return 0;
}