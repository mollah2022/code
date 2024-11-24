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
           string s2 = "";

           int ln = s1.size();
           if( ln==1 ){
             cout << s1 << endl;
             return 0;
           }

           for( int i = 0; i < s1.size(); i++ ){
              if( s1[i]>='0' && s1[i]<='9'){
                s2+=s1[i];
              }
           }
           sort(s2.begin(),s2.end());
           string s3 = "";

           for( int i = 0; i < s2.size(); i++ ){
                   s3 = s3 + s2[i]+'+';
           }

           for( int i = 0; i < s3.size()-1; i++ ){
                   cout << s3[i];
           }


  return 0;
}