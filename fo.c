#include<stdio.h>
int main(){

int i = 0;
int sum = 0;

for ( i = 0; i <= 10; i++)
{
    
    printf("%d",i);
    sum+=i;
}

printf(" sum is %d",sum);

    return 0;
}