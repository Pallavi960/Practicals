#include<stdio.h>
//program to convert temprature
void main()
{
  int celsius;
  printf("enter the temprature in cessius:");
  scanf("%d",&celsius);
  float fahrenheit;
  fahrenheit=(celsius*9/5)+32;//formula to convert temprature
  printf(" temprature in fahrenheit :%f",fahrenheit);
}
