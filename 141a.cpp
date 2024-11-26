//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";
#define endl "\n"
 
int32_t main(){
    
           FAST
           string s1,s2,s3; cin >> s1 >> s2 >> s3;

           string s4 = s1 + s2;

           sort(s3.begin(),s3.end());
           sort(s4.begin(),s4.end());

           if( s3 == s4 ) cout <<"YES\n";
           else cout <<"NO\n";
  return 0;
}