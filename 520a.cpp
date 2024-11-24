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
          int tt; cin >> tt;
          string s1; cin >> s1;

          transform(s1.begin(),s1.end(),s1.begin(),::tolower);

          sort(s1.begin(),s1.end());
          int sz = unique(s1.begin(),s1.end())-s1.begin();

          if( sz == 26 ) cout << "YES\n";
          else cout << "NO\n";


  return 0;
}