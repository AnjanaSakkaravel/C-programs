#include <stdio.h>
int main()
{
  int val1,val2,val;
  printf("Enter the 2 values to be swapped:");
  scanf("%d%d",&val1,&val2);
  val=val2;
  val2=val1;
  val1=val;
  printf("\n%d\n%d",val1,val2);
  return 0;
}

