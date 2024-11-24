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
           int a = 0,b = 0,c = 0;
           tst{
                 int x,y,z; cin >> x >> y >> z;
                 a+=x;
                 b+=y;
                 c+=z;
           }

           if( a == 0 && b == 0 && c == 0 ) cout <<"YES\n";
           else cout <<"NO\n";
  return 0;
}