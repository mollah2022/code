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
           ll n; cin >> n;

           ll a = ceil((double)n/2);

           ll b = n/2;

           ll sum1 = b*(b+1);
           ll sum2 = a*a;

           cout << sum1-sum2 << endl;
  return 0;
}