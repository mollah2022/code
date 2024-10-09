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

           string s1; cin >> s1;

           int cnt = 0;
           int mx = 0;
           for( int i = 0; i < s1.size()-1; i++ ){
                if( s1[i] != s1[i+1] ){
                      cnt++;
                }
                else{
                    mx = max(cnt,mx);
                    cnt = 0;
                }
           }
           cout << mx + 1 << endl;
  return 0;
}