//converting temperature in fahrenheit
#include<stdio.h>
int main()
{
 int dc;
 float fh;
 printf("Enter the value of dc to convert into fh:");
 scanf("%d",&dc);
 fh=(1.8*dc)+32;
 printf("%f",fh);
 return 0;
}
