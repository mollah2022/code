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
           int m; cin >> m;
           vector<int>v1,v2;
           for(int i = 0; i < m; i++ ){
              int q; cin >> q;
              v1.push_back(q);
           }
           int k; cin >> k;
           for(int i = 0; i < k; i++ ){
              int r; cin >> r;
              v2.push_back(r);
           }
           v1.insert(v1.end(), v2.begin(), v2.end());

           sort(v1.begin(),v1.end());

           // cout << v1.size() << endl;

           vector<int>v3;

           for( int i = 0; i < n; i++ ){
               v3.push_back(i+1);
           }

           int cnt = 0;

           for( int i = 0; i < v3.size(); i++ ){
            int find = 0;
               for( int j = 0; j < v1.size(); j++ ){
                      if( v3[i] == v1[j] ){
                        find = 1;
                      }
               }
               if( find == 1 ){
                  cnt++;
               }
           }

           if( n==cnt ){
               cout <<"I become the guy.\n";
           }
           else{
               cout <<"Oh, my keyboard!\n";
           }

  return 0;
}