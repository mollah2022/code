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
             int n; cin >> n;

             vector< pair < string,string> > v1;

             for( int i = 0; i < n; i++ ){
                string s1,s2; cin >> s1 >> s2;
               v1.push_back({s1,s2});
             }

             sort(v1.begin(),v1.end());
             int sz = unique(v1.begin(),v1.end())-v1.begin();

             cout << sz << endl;
  return 0;
}