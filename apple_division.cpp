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

           vector<int>v1;

           for( int i = 0; i < n; i++ ){
               int m; cin >> m;
               v1.push_back(m);
           }

            int sumValue1 = 0;
            int sumValue2 = 0;

            sort(v1.begin(),v1.end());

          for( int i = v1.size()-1; i >= 0; i-- ){

               if( sumValue1 < sumValue2 ){
                    
                    sumValue1+=v1[i];
                    v1.erase(v1.begin()+i);
               }
               else{

                      sumValue2+=v1[i];
                      v1.erase(v1.begin()+i);
               }
          }

          //cout << sumValue1 << " " << sumValue2 << endl;

          cout << abs( sumValue1 - sumValue2 ) << endl;
  return 0;
}