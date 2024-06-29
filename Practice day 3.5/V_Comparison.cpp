// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b;
//     char s;
//     cin >> a >> b >> s;
    
//        if (a>b)
//         {
//             cout << Right;
//         }
//      else if (a<b)
//       {
//         cout << Wrong;
//       }
//       else if (a==b)
//       {
//         cout<< Right;
//       }

//       else 
//       {
//         cout<< NOT valid;
//       }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (s == '<')
     {
        if (a < b) 
        {
            cout << "Right" << endl;
        } 
        else
        {
            cout << "Wrong" << endl;
        }
    } 
    else if (s == '>')
     {
        if (a > b)
        {
            cout << "Right" << endl;
        } 
        else 
        {
            cout << "Wrong" << endl;
        }
    } 
    else if (s == '=') 
    {
        if (a == b)
        {
            cout << "Right" << endl;
        } else 
        {
            cout << "Wrong" << endl;
        }
    } 
    else 
    {
        cout << "Invalid symbol" << endl;
    }

    return 0;
}