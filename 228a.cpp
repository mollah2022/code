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

           vector<int>v1;

           for( int i = 0; i < 4; i++ ){
              int s1; cin >> s1;
              v1.push_back(s1);
           }
           sort(v1.begin(),v1.end());
          int st =  unique(v1.begin(),v1.end())-v1.begin();

          cout << 4-st << endl;

  return 0;
}