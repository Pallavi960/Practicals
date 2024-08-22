#include<stdio.h>
void main()
{
  int i,n;
  printf("enter the starting number");
  scanf("%d",&n);
  printf("countdown:\n");
  for(i=n;i>=0;i--)
  {
    printf("%d\n",i);
    sleep(i);
  }
  printf("countdown completed");
}
