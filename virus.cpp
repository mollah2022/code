#include <iostream>
#include <string>
#include <algorithm>  // for reverse
#include <vector>

using namespace std;

int main() {
    int n;
    string t;

    cin >> n;
    cin >> t;
    for (int d = 1; d <= n; ++d) {
        if (n % d == 0) {
            reverse(t.begin(), t.begin() + d); 
        }
    }
    cout << t << endl;

    return 0;
}
