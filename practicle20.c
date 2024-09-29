#include <stdio.h>
void print_msg();
int input_number();
void grade(int arr[], int k);
float average(int arr[], int k);
void main()
{
  int student, arr[50];
  print_msg();
  student = input_number();
  for (int i = 0; i < student; i++)
  {
    printf("Enter the marks of student %d:", i + 1);
    scanf("%d", &arr[i]);
    }
  grade(arr, student);
  float ans = average(arr, student);
  printf("The average grade of student is:%.2f", ans);
}
void print_msg()
{
  printf("Welcome to CHARUSAT university!\n");
  printf("-------------------------------\n");
  printf("-------------------------------");
  printf("\n");
}
int input_number()
{
  int n;
  printf("Enter the number of student:");
  scanf("%d", &n);
  return n;
}
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
