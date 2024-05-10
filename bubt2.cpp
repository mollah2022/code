//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";
const int N = 1e6+9;
ll v1[N];
map<ll,ll>mp;

int32_t main(){
           FAST
           v1[0]=1;
           for(int i=1;i<N;i++){
               v1[i]=v1[i-1]+i;
               mp[v1[i]]=i;
           }
               tst{
                        ll n; cin >> n;
                        if(n==1){
                               cout << 0 << endl;
                               continue;
                        }

                            auto it = mp.lower_bound(n);
                            cout << it->second << endl;
               }
  return 0;
}