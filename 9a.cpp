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

             int mx = max (n,m);

             if( mx == 1 ) cout <<"1/1\n";
             else if( mx == 2 ) cout <<"5/6\n";
             else if( mx == 3 ) cout <<"2/3\n";
             else if( mx == 4 ) cout <<"1/2\n";
             else if( mx == 5 ) cout <<"1/3\n";
             else if( mx == 6 ) cout <<"1/6\n";
  return 0;
}