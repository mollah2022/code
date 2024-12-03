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

            vector<int>v1;

            int result = 0;

            int a,b; cin >> a >> b;

            result = (a+b);

            v1.push_back(result);

            for( int i = 1; i < n; i++ ){

                  cin >> a >> b;

                  result = abs(result-a);
                  result = (result+b);
                   
                  v1.push_back(result);

            }
             int ans = *max_element(v1.begin(),v1.end());
            cout << ans << endl;

  return 0;
}