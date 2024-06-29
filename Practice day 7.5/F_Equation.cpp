#include <iostream>
using namespace std;
int calculateSum(int X, int N) {
    int S = 0;
    int power = 1;  
    for (int i = 0; i <= N; i += 2) {
        if (i == 0) {
            S += (power - 1); 
        } else {
            power *= X * X;  
            S += power;
        }
    }
    return S;
}
int main() {
    int X, N;
    cin >> X >> N;

    int result = calculateSum(X, N);
    cout << result << endl;
    return 0;
}
