#include <stdio.h>
void main()
{
   int i, j, n = 5;
   for (i = 1; i <= n; i++)
   {
      for (j = 1; j <= n - i; j++)
      {
         printf(" ");
      }
      int t = 65;
      for (j = n - i + 1; j <= n; j++)
      {
         printf("%s", &t);
         t++;
      }
      t = t - 2;
      for (j = 1; j <= i - 1; j++)
      {
         printf("%s", &t);
         t--;
      }
      printf("\n");
   }
}

