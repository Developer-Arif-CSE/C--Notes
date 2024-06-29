// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     int a[n];
//     for (int i=0; i<n; i++) 
//     {
//         cin>> a[i];
//     }
//     int i=0; 
//     int j=strlen(a)-1;
//     int flag=1;
//     while (i>j)
//     {
//       if (a[i]!=a[j])
//       {
//         flag=0;
//       }
//       i++;
//       j--;
//     }
//     if (flag==0)
//     {
//         cout << NO ;
//     }
//     else 
//     {
//         cout<< YES;
//     }

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int i = 0;
  int j = n - 1;
  int flag = 1;

  while (i < j) {
    if (a[i] != a[j]) {
      flag = 0;
    }

    i++;
    j--;
  }

  if (flag == 0) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }

  return 0;
}
