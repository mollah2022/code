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

           if( n== 1 ) {
              cout <<"I hate it\n";
              return 0;
           }

           string s1 = "I hate that ";
           string s2 = "I love that ";
           string s3 = "it ";

           string s = "";

           for( int i = 1; i <= n; i++ ){
               if( i%2!=0 ){
                  s+=s1;
               }
               else{
                  s+=s2;
               }
           }

           for( int i = 0; i < s.size()-5; i++ ){
              cout << s[i];
           }
           cout << "it\n";
  return 0;
}