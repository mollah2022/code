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
           vector<pair<string,string> > v1(n);
           
           for( int i = 0; i < n; i++ ){
               cin >> v1[i].first >> v1[i].second;
           }

           sort(v1.begin(),v1.end());
           int st = unique(v1.begin(),v1.end())-v1.begin();

           cout << st << endl;
  return 0;
}