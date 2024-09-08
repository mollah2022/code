#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        long long n;
        int k;
        cin >> n >> k;

        // Check for odd sum case
        if (n >= k && (n - k) % 2 == 0) {
            cout << "YES\n";
            // Output k odd numbers summing to n: the simplest is (k-1) ones and (n - (k-1)) for the last number
            for (int i = 0; i < k - 1; ++i)
                cout << 1 << " ";
            cout << n - (k - 1) << "\n";
        }
        // Check for even sum case
        else if (n >= 2 * k && (n - 2 * k) % 2 == 0) {
            cout << "YES\n";
            // Output k even numbers summing to n: the simplest is (k-1) twos and (n - 2*(k-1)) for the last number
            for (int i = 0; i < k - 1; ++i)
                cout << 2 << " ";
            cout << n - 2 * (k - 1) << "\n";
        }
        // If neither condition is satisfied, it's not possible to represent n with k numbers of the same parity
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
