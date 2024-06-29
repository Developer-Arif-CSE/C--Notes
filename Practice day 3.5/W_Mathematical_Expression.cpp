#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    char symbol, equalsSign;
    cin >> a >> symbol >> b >> equalsSign >> c;
    if (equalsSign != '=') 
    {
        cout << "Invalid input format" << endl;
        return 1;
    }

    switch (symbol)
     {
        case '+':
            if (a + b == c)
            {
                cout << "Yes" << endl;
            } else 
            {
                cout << a << " + " << b << " = " << a + b << endl;
            }
            break;
        case '-':
            if (a - b == c)
            {
                cout << "Yes" << endl;
            } else 
            {
                cout << a << " - " << b << " = " << a - b << endl;
            }
            break;
        case '*':
            if (a * b == c) 
            {
                cout << "Yes" << endl;
            } 
            else
            {
                cout << a << " * " << b << " = " << a * b << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
