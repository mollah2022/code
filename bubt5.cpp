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
                     double mx = 0.0;
                     int n; cin >> n;
                     vector<pair<int ,int>> v1(n);
                     for(int i=0;i<n;i++){
                        cin >> v1[i].first >> v1[i].second;
                     }
                     for(int i=0;i<n;i++){
                            double ans1 = ((v1[i].first*v1[i].first)+(v1[i].second*v1[i].second));
                            double result = sqrt(ans1);
                            if(result>mx){
                                  mx = result;
                            }
                     }
                     double pi = 2*acos(0.0);
                     double ans = (2.*pi*mx);
                     cout << fixed << setprecision(6)<<ans << endl;
             }
  return 0;
}