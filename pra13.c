#include<stdio.h>
void main()
{
 int v,h,i,j;
 printf("enter the size of table vertcally");
 scanf("%d",&v);
 printf("enter the size of table horizontally");
 scanf("%d",&h);
 for(i=1;i<=h;i++)
 {
  for(j=1;j<=v;j++)
 {
   printf("%3d",i*j);
 }
   printf("\n");
 }


}
