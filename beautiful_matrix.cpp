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
           int tt = 5;

           int findValue = 0;
           int positionValue = 0;

           for( int i = 1; i <= tt; i++ ){
            string s2;
            getline(cin,s2);

            for( int k = 0; k < s2.size(); k++ ){
                if( s2[k]!='0' && s2[k] != '1' ){
                    s2.erase(s2.begin()+k);
                    k = k - 1;
                }
            }
            string s1 = s2;

            for( int j = 0; j < s1.size(); j++ ){
                if( s1[j] == '1' ){
                    findValue = i;
                    positionValue = j+1;
                    break;
                }
            }    
         }
         // cout << findValue <<" "<<positionValue<<endl;
       int resultValue = 0;

            if( findValue >= 3 ){
                resultValue += findValue -3 ;
            }
            else{
                resultValue += 3 - findValue;
            }
            // cout << resultValue << endl;

            if( positionValue >= 3 ){
                resultValue += positionValue - 3;
            }
            else{
                resultValue += 3 - positionValue;
            }

            cout << resultValue << endl;
  return 0;
}