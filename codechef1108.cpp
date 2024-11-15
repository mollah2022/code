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
               string s1,s2; cin >> s1 >> s2;
               int s1one = 0,s2one = 0;
               for( int i = 0; i < n; i++ ){
                  if( s1[i] == '1' ){
                    s1one++;
                  }
               }
                for( int i = 0; i < n; i++ ){
                  if( s2[i] == '1' ){
                    s2one++;
                  }
               }

               if( s1one!=s2one) cout <<"NO\n";
               else cout <<"YES\n";
           }
  return 0;
}