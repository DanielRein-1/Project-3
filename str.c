#include<stdio.h>
#include<string.h>
int main(){

char str1[] ="Mku";
char str2[] = "Jkuat";
char str3[2];
str3 = strcat(str1,str2);

printf("name is %s",str3);
printf("reverse is %s",strrev(str1));
printf("copy  is %s",strcpy(str1,str2));
printf("length is %s",strlen(str1));
return 0;

}