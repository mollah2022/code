#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        vector<int> om_problems(N);
        vector<int> addy_problems(N);

        for (int i = 0; i < N; i++) {
            cin >> om_problems[i];
        }

        for (int i = 0; i < N; i++) {
            cin >> addy_problems[i];
        }

        int max_om_streak = 0;
        int max_addy_streak = 0;
        int current_om_streak = 0;
        int current_addy_streak = 0;

        for (int i = 0; i < N; i++) {
            if (om_problems[i] > 0) {
                current_om_streak++;
            } else {
                current_om_streak = 0;
            }

            if (addy_problems[i] > 0) {
                current_addy_streak++;
            } else {
                current_addy_streak = 0;
            }

            max_om_streak = max(max_om_streak, current_om_streak);
            max_addy_streak = max(max_addy_streak, current_addy_streak);
        }

        if (max_om_streak > max_addy_streak) {
            cout << "Om" << endl;
        } else if (max_addy_streak > max_om_streak) {
            cout << "Addy" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }

    return 0;
}