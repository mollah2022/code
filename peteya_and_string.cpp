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
           string s1,s2; cin >> s1 >> s2;

           transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
           transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 

           int upValue = 0,loValue = 0;

           for( int i = 0; i < s1.size();i++ ){
               if( s1[i] > s2[i] ){
                 upValue++;
                 break;
               }
               else if( s1[i] < s2[i] ){
                loValue++;
                break;
               }
           }

           if( upValue == 1 ){
              cout << 1 << endl;
           }
           else if( loValue == 1 ){
              cout <<"-1\n";
           }
           else{
            cout << 0 << endl;
           }
  return 0;
}