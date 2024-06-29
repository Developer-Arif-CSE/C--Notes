// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string names;
//     cin >> names;

//     // Alternative to string::npos: check if find returns a negative index
//     if (names.find("Jessica") >= 0) {  // >= 0 means "Jessica" was found
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string names;
//     cin >> names;  // Read the string of names

//     // Check if "Jessica" (with exact capitalization) is present
//     if (names.find("Jessica") != string::npos) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     if (s.find("Jessica") != string::npos)
//     {  
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
//  {
//    string S;
//    getline(cin, S);
//    bool foundJessica = S.find(" Jessica ") != string::npos; 

//    if (foundJessica)
//    {
//        cout << "YES" << endl;
//    } 
//    else 
//    {
//        cout << "NO" << endl;
//    }

//    return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
//  {
//    string S;
//    getline(cin, S); 
//    bool fj = false;
//    for (int i = 0; i < S.length(); i++) 
//    {
//        string js = "";
//        while (i < S.length() && S[i] != ' ') 
//        {  
//            js += S[i];
//            i++;
//        }
//        if (js == "Jessica") 
//        {
//            fj = true;
//            break;
//        }
//    }
//    cout << (fj?  "YES" : "NO") << endl;
//    return 0;
// }
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string S;
//     getline(cin, S);  // Read the entire line, including spaces

//     size_t found = S.find("Jessica");

//     if (S.find("Jessica")) {  // "Jessica" found
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string S;
//     getline(cin, S);  // Read the entire line, including spaces

//     size_t found = S.find("Jessica");

//     if (S.find("Jessica"))
//     {  // "Jessica" found
//         cout << "YES" << endl;
//     } 
//     else
//      {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin, S);
    int t = S.find(" Jessica ");
    cout << (t!= -1 ? "YES" : "NO") << endl;
    return 0;
}
