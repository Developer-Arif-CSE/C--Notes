#include <bits/stdc++.h>
using namespace std;
int main()
 {
  char X;
  cin >> X;
  if (X >= '0' && X <= '9')
   {
    cout << "IS DIGIT";
   }
   else if (X >= 'A' && X <= 'Z') 
   {
    cout << "ALPHA" << endl;
    cout << "IS CAPITAL";
   }
   else if (X >= 'a' && X <= 'z')
    {
    cout << "ALPHA" << endl;
    cout << "IS SMALL";
    }
   else 
   {
    cout << "INVALID CHARACTER";
  }

  return 0;
}
