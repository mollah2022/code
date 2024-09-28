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
               string s1; cin >> s1;
               for(int i=n-1,j=m-1;i<j;i++,j--){
                  char temp = s1[i];
                  s1[i] = s1[j];
                  s1[j] = temp;
               }
               cout << s1 << endl;
  return 0;
}