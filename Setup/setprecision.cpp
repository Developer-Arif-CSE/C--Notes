#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin>> a;
    //printf("%0.5lf \n",a);
    cout<<fixed<<setprecision(3)<<a<<endl;
    return 0;
}