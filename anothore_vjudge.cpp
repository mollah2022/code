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
           while(true){
              string s1; 
              getline(cin,s1);
              char ch;
              for( int i = 0; i < s1.size();i++){
                    if(s1[i]=='+' || s1[i]=='-' || s1[i]=='*'
                      || s1[i]=='/' || s1[i]=='?'){
                      ch =s1[i];
                    }
              }

            if( ch=='?'){
                break;
            }

            string s2="";
            string s3 ="";
            int value = 0;
              for( int i = 0; i < s1.size(); i++ ){
                      if(s1[i]=='+' || s1[i]=='-' || s1[i]=='*'
                      || s1[i]=='/' || s1[i]=='?'){
                    value = i;
                      break;
                    }
                    else if(s1[i]>='0' && s1[i]<='9'){
                      s2+=s1[i];
                    }
              }
              for( int i = value+1; i < s1.size(); i++ ){
                   if(s1[i]>='0' && s1[i]<='9'){
                      s3+=s1[i];
                    }
              }
               // cout << s2 <<" "<<s3 << endl;

              int n = stoi(s2);
              int m = stoi(s3);

              if( ch=='+') cout << n+m << endl;
              else if( ch=='-') cout << (n-m) << endl;
              else if( ch=='*') cout << n*m << endl;
              else if( ch=='/') cout << n/m << endl;

           }
  return 0;
}