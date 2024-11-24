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
           int cntValue = 0;

           while( n <= m ){
               cntValue++;
               n *=3;
               m *=2;
           }

           cout << cntValue << endl;
  return 0;
}