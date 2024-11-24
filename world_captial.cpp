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
           //btransform(s1.begin(),s1.end(),s1.begin(),::tolower);
           char ch = toupper(s1[0]);
           cout << ch;
           for( int i = 1; i < s1.size(); i++ ){
              cout << s1[i];
           }
  return 0;
}