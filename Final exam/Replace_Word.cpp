// #include <bits/stdc++.h>
// using namespace std;
// string repWord(string S, string X)
//  {
//     int pos = 0;
//     while ((pos = S.find(X, pos)) != string::npos)
//     {
//         S.replace(pos, X.length(), "#");
//         pos += 1; 
//     }
//     return S;
// }
// int main()
//  {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         string S, X;
//         cin >> S >> X;

//         string replace = repWord(S, X);
//         cout << replace << endl;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s,x;
//     cin>>s>>x;
//     while(s.find("x")!=-1)
//     {
//         s.replace(s.find("x"),(x.length),"#");
//     } 
//     cout<<s<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; 
    cin >> t;
    while (t--) 
    {
        string S, X;
        cin >> S >> X;
        int pos = 0;
        while ((pos = S.find(X, pos)) != -1) 
        {
            S.replace(pos, X.length(), "#");
            pos += X.length(); 
        }
        cout << S << endl;
    }
    return 0;
}
