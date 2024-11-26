#include <bits/stdc++.h>
using namespace std;



int main() {
    int cnt = 0;
    for( int i = 1000; i >= 1; i-- ){
        if( cnt <= 5 ){
            cout <<i<<" ";
            cnt++;
            if( cnt == 5 ){
                cout <<"\n";
                cnt = 0;
            }
       }
    }
    return 0;
}