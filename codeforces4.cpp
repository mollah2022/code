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
                   string s1; cin >> s1;
                   int count = 0;
                   for(int i=0;i<s1.size()-1;i++){
                       if(s1[i]=='1' && s1[i+1]=='0' || s1[i]=='0' && s1[i+1]=='1' &&s1[i+2]=='0'){
                            count++;
                       }
                   }
                   cout << count << endl;
             }
  return 0;
}