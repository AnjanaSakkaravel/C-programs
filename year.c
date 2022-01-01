//year/years to get converted into minutes
#include<stdio.h>
int main()
{
 int years,minutes;
 printf("Enter the number of year/years to be converted into minutes:");
 scanf("%d",&years);
 minutes=years*365*24*60;
 printf("%d",minutes);
 return 0;
}
