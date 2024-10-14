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

             int n; cin >> n;

             std::vector<int> v1;

             for( int i = 0; i < n; i++ ){
                  int b; cin >> b;
                  v1.push_back(b);
             }

             int serjaValue = 0, demaValue = 0;

             int turns = 1;

                   while( !v1.empty() ){
                   if( turns == 1 ){
                        if( v1[0] > v1.back() ){
                         serjaValue +=v1[0];
                         v1.erase(v1.begin());
                   }
                   else{
                         serjaValue +=v1.back();
                         v1.pop_back();
                     }
                       turns = 2;
                   }
                   else if( turns == 2) {
                             if( v1[0] > v1.back() ){
                         demaValue +=v1[0];
                         v1.erase(v1.begin());
                   }
                   else{
                         demaValue +=v1.back();
                         v1.pop_back();
                     }
                     turns = 1;
                   }
             }

             cout << serjaValue << " " << demaValue << endl;
  return 0;
}