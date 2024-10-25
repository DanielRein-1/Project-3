#include<stdio.h>
int main(){

int sum = 0;
int num= 1;

do
{
    printf("%d ",num);
    sum+=num;
    num++;
  
}
 while (num <=10);

    {
        printf(" sum is %d",sum);
    }

    return 0;
}