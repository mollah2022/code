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
           int n,m; cin >> n >> m;
           char s1[n][m];

           for( int i = 0 ; i < n ; i++){
               for(int j = 0; j < m ; j++){
                     cin >> s1[i][j];
               }
           }
           int x,y; cin >> x >> y;
           x = x-1;
           y = y-1;
           bool isAnswer = false;
           if(s1[x][y-1]!='.' && s1[x][y+1]!='.' && s1[x-1][y]!='.' &&
            s1[x+1][y]!='.' && s1[x-1][y-1]!='.' && s1[x-1][y+1]!='.'
            && s1[x+1][y-1]!='.' && s1[x+1][y+1]!='.'){
               isAnswer = true;
           }
           if(isAnswer){
               cout <<"yes\n";
           }
           else{
              cout << "no\n";
           }
  return 0;
}