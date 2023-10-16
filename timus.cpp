#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define tst int t;cin>>t;while(t--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define sajib ios::sync_with_stdio(false);cin.tie(0);
#define rvs(v) reverse(v.begin(),v.end());
#define F first
#define S second
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ld long double
#define nl '\n'
const int N = 1e5;
using namespace std;
#ifndef ONLINE_JUDGE
#else
#define dbg(x...)
#endif
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
   return uniform_int_distribution<int>(l, r) (rng);
}

int32_t main(){
    
      sajib
         int n; cin >> n;
         int a1[n];
         vector < int > v1,v2;
         int mn1 = INT_MAX;
         int mn2 = INT_MAX;
         for(int i=0;i<n;i++){
              cin >> a1[i];
         }
          for(int i=0;i<n/2;i++){
                   v1.push_back(a1[i]); 
          }
          for(int i = n/2;i<n;i++){
              v2.push_back(a1[i]);
          }
          for(int i=0;i<v1.size();i++){
                int ans1 = abs(v1[i]-v1[i+1]);
                     mn1 = min(ans1,mn1);
          }
           for(int i=0;i<v2.size();i++){
                int ans2 = abs(v2[i]-v2[i+1]);
                     mn2 = min(ans2,mn2);
          }
          cout << min(mn1,mn2) << endl;
   return 0;
}