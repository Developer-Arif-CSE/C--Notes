#include<bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin >> t;

   while (t--) {
       string tic;
       cin >> tic;

       int sumFirstThree = 0, sumLastThree = 0;
       for (int i = 0; i < 3; i++) 
       {
           sumFirstThree += tic[i] - '0';
           sumLastThree += tic[i + 3] - '0';
       }

       cout << (sumFirstThree == sumLastThree ? "YES" : "NO") << endl;
   }

   return 0;
}
