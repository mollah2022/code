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

           int cnt = 0;

           while( n > 0 ){
              if( n >= 100 ){
                cnt += n/100;
                n = n % 100;
              }
              else if( n >= 20 ){
                cnt += n/20;
                n = n % 20;
              }
              else if( n >= 10 ){
                cnt += n/10;
                n = n % 10;
              }
              else if ( n >= 5 ){
                cnt += n/5;
                n = n % 5;
              }
              else{
                cnt += n/1;
                n = n % 1;
              }
           }
           cout << cnt << endl;
  return 0;
}