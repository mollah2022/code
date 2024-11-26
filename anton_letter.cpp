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
           string s1;
           getline(cin,s1);
           string s2 = "";
           for( int i = 0; i < s1.size(); i++ ){
              if( s1[i]>='a' && s1[i]<='z' ){
                s2 +=s1[i];
              }
           }
           // cout << s2 << endl;
           sort(s2.begin(),s2.end());
           int st = unique(s2.begin(),s2.end())-s2.begin();

           cout << st << endl;
  return 0;
}