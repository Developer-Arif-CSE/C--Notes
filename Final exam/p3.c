#include <stdio.h>
#include<math.h>
int main() 
{
   double phi=3.14159;
   double R;
   scanf("%lf",&R);
   double  result=phi*pow(R,2);
   printf("A=%.4lf\n",result); 
    return 0;
}