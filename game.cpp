#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
int p1,p2;
int ply1=0;
int ply2=0;
int maxlead=0;
int winner;
while(t--){
    cin>>p1>>p2;
    ply1+=p1;
    ply2+=p2;
    int currentlead= abs(ply1-ply2);
    if(currentlead>maxlead){
    maxlead=currentlead;

if(ply1>ply2){
    winner=1;
}
else {
    winner=2;
}
        
    }
}
cout<<winner<<" "<<maxlead;
    
return 0;
}
