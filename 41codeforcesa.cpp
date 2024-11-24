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
           string s1,s2; cin >> s1 >> s2;

           reverse(s1.begin(),s1.end());

           //cout << s1 <<" "<<s2 << endl;

           if( s1 == s2 ) cout <<"YES\n";
           else cout << "NO\n";
  return 0;
}