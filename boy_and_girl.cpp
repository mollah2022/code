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
           string s1; cin >> s1;
           
           sort(s1.begin(),s1.end());
           int ln = unique(s1.begin(),s1.end())-s1.begin();
           if( ln % 2 == 0 ){
              cout <<"CHAT WITH HER!\n";
           }
           else{
              cout <<"IGNORE HIM!\n";
           }
  return 0;
}