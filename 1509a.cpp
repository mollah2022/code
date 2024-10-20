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
               vector<int>v1;

               for(int i = 0; i < n; i++ ){
                    int m; cin >> m;
                    if( m & 1){
                          cout << m << " ";
                    }
                    else{
                        v1.push_back(m);
                    }
               }

               for(auto u : v1){
                   cout << u <<" ";
               }
               cout << endl;

           }
  return 0;
}