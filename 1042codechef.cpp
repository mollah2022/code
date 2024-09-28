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
                     int n ; cin >> n ;

                     string s1 ; cin >> s1 ;

                    int zeroCount = count( s1.begin() , s1.end() , '0') ;

                    int Answer = n - zeroCount;

                    if( zeroCount < Answer ){
                           cout << zeroCount+1 << endl;
                    }
                    else{
                           cout << Answer << endl;
                    }

              }
  return 0;
}