#include<stdio.h>
#include<math.h>

int a,b,c;
float y;

int main()
{
printf("Enter  the  threeee  values ");
scanf("%d%d%d",&a,&b,&c);

y =sqrt(a*pow(b,3))*c*sqrt(a) +sin(a);
printf("Y is %.2f",y);

return 0;
}