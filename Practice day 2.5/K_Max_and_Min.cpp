// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     int d= mn({a,b,c});
//     int e= mx({a,b,c});
//     cout<<d<<" "<<e<<end;

//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//   int a, b, c;
//   cin >> a >> b >> c;

//   int mn = min(a, b, c); // Use min() function from <algorithm> header
//   int mx = max(a, b, c); // Use max() function from <algorithm> header

//   cout << mn << " " << mx << endl;

//   return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
 {
  int a, b, c;
  cin >> a >> b >> c;
  int d = min({a, b, c});
  int e = max({a, b, c});
  cout << d << " " << e << endl;
  return 0;
}