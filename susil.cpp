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
                 int n; cin >> n;
                 int odd =0 ,even = 0;
                 for( int i=0;i<n;i++){
                       int num; cin >> num;
                       if(num%2==1){
                        odd++;
                       }
                       else{
                        even++;
                       }
                 }

                 if(odd==0){
                      cout << 0 << endl;
                      continue;
                 }

                 int result = 0;

                 if(odd%2==1){
                     result +=(odd/2)+1;
                     result = result+even;
                 }
                 else{
                    result +=odd/2;
                    result+=even;
                 }

                 cout << result << endl;
           }
  return 0;
}