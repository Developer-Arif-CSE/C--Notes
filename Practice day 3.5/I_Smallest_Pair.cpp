#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin >> t;
  for (int i = 0; i< t; i++)
   {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int min_sum = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = i + 1; j < n; j++) 
      {
        min_sum = min(min_sum, a[i] + a[j] + j - i);
      }
    }

    cout << min_sum << endl;
  }

  return 0;
}
