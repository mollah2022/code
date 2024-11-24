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

           int ln = s1.size();

           if( ln == 1 && (s1[0] =='7' || s1[0]=='4')){
            cout <<"NO\n";
            return 0;
           }
           bool isValue = true;

           for( int i = 0; i < s1.size(); i++ ){
              if( s1[i]!='4' && s1[i]!='7'){
                isValue = false;
              }
           }

           if( isValue ) cout <<"YES\n";
           else cout <<"NO\n";
  return 0;
}