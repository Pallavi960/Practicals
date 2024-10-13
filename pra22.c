#include<stdio.h>
#include<math.h>
int marks(int s,int arr[]);
float ave(int s,int arr[]);
int maxx(int s,int arr[]);
int minn(int s,int arr[]);
void main()
{ 
  int student,mark[20],total_marks;
  printf("Enter the number of student:");
  scanf("%d",&student);
  total_marks=marks(student,mark);
  printf("Total marks:%d\n",total_marks);
  float ans=ave(student,mark);
  printf("Average marks %.2f\n",ans);
  int max_marks=maxx(student,mark);
  printf("Highst marks:%d\n",max_marks);
  int min_marks= minn(student,mark);
  printf("Lowesr marks :%d\n",min_marks);
}
 int marks(int s,int arr[20])
 {
    int sum=0;
    printf("Enter the marks of ccp subject\n");
   for(int i=0;i<s;i++)
  {
    printf("Student %d:",i+1);
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }
    printf("\n");
    return sum;
 }
 float ave(int s,int arr[20])
 {
    int sum=0;
    for(int i=0;i<s;i++)
    {
      sum+=arr[i];
    }
    float average=sum/s;
    return average;
 }
 int maxx(int s,int arr[20])
 {
    int maxx=arr[0];
    for(int i=0;i<s;i++)
    {
       if(arr[i]>maxx)
       {
         int t=arr[i];
         arr[i]=maxx;
         maxx=t;
       }
    }
    return maxx;
 }
 int minn(int s,int arr[20])
 {
    int minn=arr[0];
    for(int i=0;i<s;i++)
    {
        if(arr[i]<minn)
       {
         int t=arr[i];
         arr[i]=minn;
         minn=t;
       }
    }
    return minn;
 }
