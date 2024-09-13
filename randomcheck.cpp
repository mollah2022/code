#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;

    // Array to count how many characters we need to remove for each letter 'a' to 'z'
    vector<int> to_remove(26, 0);

    // First, count how many times we can remove each character
    for (char c = 'a'; c <= 'z'; ++c) {
        for (char ch : s) {
            if (ch == c && k > 0) {
                to_remove[c - 'a']++;  // Increase the removal count for this character
                k--;
                if (k == 0) break;
            }
        }
    }

    // Now, build the resulting string
    string result = "";
    for (char ch : s) {
        if (to_remove[ch - 'a'] > 0) {
            to_remove[ch - 'a']--;  // Remove this character
        } else {
            result += ch;  // Keep this character in the result
        }
    }

    // Output the result
    cout << result << endl;

    return 0;
}
