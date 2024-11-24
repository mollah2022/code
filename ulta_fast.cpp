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
          string s3 = "";

          for( int i = 0; i < s1.size(); i++ ){
              if( s1[i]=='0' && s2[i]=='0' || s1[i]=='1' && s2[i]=='1' ){
                 s3+='0';
              }
              else{
                s3+='1';
              }
          }

          cout << s3 << endl;
  return 0;
}