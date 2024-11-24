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
           ll n,m; cin >> n >> m;

           ll odd = ceil((double)n/2);
           ll even = n/2;

           ll position = 0;
           if( m >= odd ){
              position = (n-odd)*2;
           }
           else{
              position = (m*2)-1;
           }

           cout << position << endl;
  return 0;
}