#include<stdio.h>
int main(){
    char n;
    int x,y,result;
    printf("enter an operation (+,-,*,/):");
    scanf("%c",&n);
    printf("enter the number 1=");
    scanf("%d",&x);
    printf("enter the number 2=");
    scanf("%d",&y);




    switch(n){
    case '+':
        result=x+y;
        printf("%d",x+y);
        break;
    case '-':
        result=x-y;
        printf("%d",x-y);
        break;
    case '*':
        result=x*y;
        printf("%d",x*y);
        break;
    case '/':
        result=x/y;
        printf("%d",x/y);
       break;



    }
return 0;
}
