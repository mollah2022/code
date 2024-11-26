#include <bits/stdc++.h>
using namespace std;


int main() {
    int tt; cin >> tt;
    while(tt--){
        int n,m,k; cin >> n >> m >> k;
        double useover = (300-k)/(double)6;
        double cureent = ((double)m/useover);
        n = (n - m)+1;
        double requiret = ((double)n/((double)k/6));
        
        cout << fixed << setprecision(2) << cureent <<" "<<requiret << endl;
    }
    return 0;
}