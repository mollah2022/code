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
           vector<pair<int,int> > v1(n);

           for( int i = 0; i < n; i++ ){
                cin >> v1[i].first >> v1[i].second;
                v1[i].first *=(-1);
           }

           sort(v1.begin(),v1.end());

           int cnt = 0;

           int a = v1[m-1].first;
           int b = v1[m-1].second;

           for( int i = 0; i < v1.size(); i++ ){
                if(v1[i].first == a && v1[i].second == b){
                      cnt++;
                }
           }

           cout << cnt << endl;
  return 0;
}