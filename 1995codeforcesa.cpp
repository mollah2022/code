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
               tst{
                        int n,a,b; cin >> n >> a >> b;
                         int m = ceil((double)b/2);
                         if(n%2==0 && m<=a){
                               cout << (n/2)*b << endl;
                         }
                         else if(n%2==0 && m>a){
                               cout << n*a << endl;
                         }
                         else if(n%2!=0 && m>a){
                               cout << n*a << endl;
                         }
                         else{
                               cout << ((n-1)/2)*b+a << endl;
                         }
               }
  return 0;
}