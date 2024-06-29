#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    cin >> N;

    vector<int> landmarks(N);
    for (int i = 0; i < N; ++i) {
        cin >> landmarks[i];
    }

    //sort(landmarks.begin(), landmarks.end());

    long long totalDistance = 0;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            totalDistance += abs(landmarks[i] - landmarks[j]);
        }
    }

    cout << totalDistance << endl;

    return 0;
}
