#include <stdio.h>
int main()
{
       int a, b;
       char n;
       printf("enter the number : ");
       scanf("%d", &a);
       printf("enter the number: ");
       scanf("%d", &b);
       printf(" enter'+'for addition\nenter '-' for substraction\nenter'*'for multiplication\nenter'/'for division\n");
       scanf(" %c", &n);
       switch (n)
       {
       case '+':
              printf("ans is:%d", a + b);
              break;
       case '-':
              printf("ans is:%d", a - b);
              break;
       case '*':
              printf("ans is:%d", a * b);
              break;
       case '/':
              printf("ans is:%d", a / b);
              break;
       deafult:
              printf("invalid ");
       }
