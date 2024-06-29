// #include <bits/stdc++.h>
// using namespace std;
// int main()
//  {
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     string word;
//     while (ss >> word)
//     {
//         reverse(word.begin(), word.end());
//         cout << word << " ";
//     }
//     cout << endl;
//     return 0;
// }
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
   string inputString;
   getline(cin, inputString);

   stringstream ss(inputString);
   string word;

   while (ss >> word) {
       string reversedWord;
       for (int i = word.length() - 1; i >= 0; i--) {
           reversedWord += word[i];  // Append characters in reverse order
       }
       cout << reversedWord << " ";
   }

   cout << endl;

   return 0;
}

