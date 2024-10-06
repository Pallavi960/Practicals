#include<stdio.h>
#include<math.h>
float tringle_area(int,int,int);
float check(int,int,int);
void main()
{  
    int a,b,c;
    printf("Enter the length\n");//get input from user
    scanf("%d%d%d",&a,&b,&c);
    float ans=check(a,b,c);//function call
    if(ans!=0)
    {
        printf("Area of the tringle is:%.2f",ans);
    }
    else
    {
        printf("Invalid input");
    }
   
}
float check(int l,int m,int n)
{
    if(l+m>n&&m+n>l&&l+n>m)//check the given length are valid or not
    {
        float k=tringle_area(l,m,n);//nested function
        return k;
    }
    else
    {
     return 0;
    }
}
float tringle_area(int a,int b,int c)
{
    float s=((a+b+c)/2.0);
    float ans=(s*(s-a)*(s-b)*(s-c));//herons formula
    float k=sqrt(ans);
    return k;
}