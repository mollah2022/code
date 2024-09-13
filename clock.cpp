//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST()
           int n; cin >> n;
           string s2  = " ";
           int mn = INT_MAX;
           int cnt = 0;
           std::vector<string> v1;
              for(int i=0;i<n;i++){
                     string s1;  cin >> s1;
                     v1.push_back(s1);
                     int n; cin >> n;
                     if(n<=mn){
                          mn = n;
                          s2 = s1;
                          cnt = i;
                     }
              }
              for(int i=cnt;i<v1.size();i++){
                   cout <<v1[i] << endl;
              }
            for(int i=0;i<v1.size();i++){
                   if(i==cnt){
                       break;
                   }
                   else{
                      cout << v1[i] << endl;
                   }
            }

  return 0;
}