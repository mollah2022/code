//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int n, d;
        cin >> n >> d;

        vector<pair<int, int>> flowerbeds(n);
        for (int i = 0; i < n; ++i) {
            cin >> flowerbeds[i].first >> flowerbeds[i].second;
        }

        int totalWaterings = 0;
        for (const auto& bed : flowerbeds) {
            int x = bed.first;
            int y = bed.second; 
            int waterings = (x+y); 
            totalWaterings += floor((double)d/waterings);
        }

        cout << "Case " << i << ": " << totalWaterings << endl;
    }
    return 0;
}