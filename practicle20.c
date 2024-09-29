#include <stdio.h>
// Student ID:24CE140
void print_msg();
int input_number();
void grade(int arr[], int k);
float average(int arr[], int k);
void main()
{
  int student, arr[50];
  print_msg();//function calling to print massage
  student = input_number();//function calling to get input from user
  for (int i = 0; i < student; i++)
  {
    printf("Enter the marks of student %d:", i + 1);
    scanf("%d", &arr[i]);
    }
  grade(arr, student);
  float ans = average(arr, student);//function calling to calculate average
  printf("The average grade of student is:%.2f", ans);
}
//function to printing massage
void print_msg()
{
  printf("Welcome to CHARUSAT university!\n");
  printf("-------------------------------\n");
  printf("-------------------------------");
  printf("\n");
}
//function to get input from user
int input_number()
{
  int n;
  printf("Enter the number of student:");
  scanf("%d", &n);
  return n;
}
//function to printing grade
void grade(int arr[50], int k)
{
  printf("Student Grades:");
  printf("\n");
  for (int i = 0; i < k; i++)
  {
    printf("student %d Grade:", i + 1);
    printf("%d", arr[i]);
    printf("\n");
  }
}
//function to calculate average
float average(int arr[50], int k)
{
  int total = 0;
  for (int i = 0; i < k; i++)
  {
    total = total + arr[i];
  }
  float average = (total / k);
  return average;
}
