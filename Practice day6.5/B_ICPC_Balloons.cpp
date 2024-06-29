
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string problems;
        cin >> problems;

        int totalBalloons = 0;
        bool isFirstForProblem[26] = {false}; // Array to track first solve for each alphabet

        for (char c : problems) {
            int charIndex = c - 'A';

            if (!isFirstForProblem[charIndex]) {
                totalBalloons += 2;
                isFirstForProblem[charIndex] = true;
            } else {
                totalBalloons += 1;
            }
        }

        cout << totalBalloons << endl;
    }

    return 0;
}
