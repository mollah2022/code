#include <iostream>
#include <vector>

using namespace std;

// Function to generate all combinations of k distinct integers between 1 and n
void generateCombinations(int n, int k, int x, vector<int>& current, int currentSum, int currentNumber) {
    if (k == 0) {
        if (currentSum == x) {
            cout << "YES" << endl;
            for (int i = 0; i < current.size(); i++) {
                cout << current[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    if (currentNumber > n || currentSum > x) {
        return;
    }

    // Include currentNumber in the combination
    current.push_back(currentNumber);
    generateCombinations(n, k - 1, x, current, currentSum + currentNumber, currentNumber + 1);

    // Exclude currentNumber from the combination
    current.pop_back();
    generateCombinations(n, k, x, current, currentSum, currentNumber + 1);
}

int main() {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> current;
    generateCombinations(n, k, x, current, 0, 1);

    if (current.empty()) {
        cout << "NO" << endl;
    }

    return 0;
}
