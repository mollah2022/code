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
        string str; cin >> str;
    int i;
    int freq[256] = {0};
    
    //Calculating frequency of each character.
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    
    //Printing frequency of each character.
    int cnt = 0;
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
             if( freq[i]%2!=0){
                 cnt++;
             }
        }
    }

    if( cnt == 1 ){
        cout <<"YES\n";
    }
    else{
        cout <<"NO\n";
    }
}
  return 0;
}