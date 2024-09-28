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
           // string s1; cin >> s1;
           // string s2 = s1;
           // reverse(s1.begin(),s1.end());

           // if(s1==s2){
           //    cout <<"YES\n";
           // }
           // else{
           //    cout <<"NO\n";
           // }
           string s1 ; cin >> s1;
           string s2 = s1;
           int len = s1.size();

           for( int i = 0 , j = len-1 ; i < j ; i++ , j-- ){
                 char temp = s1[i];
                 s1[i] = s1[j];
                 s1[j] = temp;
           }

           if(s1 == s2){
              cout <<"YES\n";
           }
           else{
               cout <<"NO\n";
           }
  return 0;
}