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

           int totalValue = 0;
           tst{
              string s1; cin >> s1;
              if( s1=="++X" || s1=="X++"){
                totalValue++;
              }
              else if( s1=="--X" || s1=="X--"){
                totalValue--;
              }
           }
           cout << totalValue << endl;
  return 0;
}