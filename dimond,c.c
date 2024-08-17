#include<stdio.h>
void main()
{    int n=5,i,j,t=65;
    for(i=1;i<=n;i++){

        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
            t++;

        }
        if(i+j>=5){
            printf(" ");
        }else{printf("*");}
        printf("\n");
    }

       for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }

        printf("\n");
    }}
