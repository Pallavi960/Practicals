#include<stdio.h>
//name:pallavi verulkar
//Id:24TEIOT
void main()
{
    int burger=150,pizza=100,pasta=120,sandwich=100,french_fries=80,total=0,i;
    printf("enter the numbers of items\n");
    printf("enter 1 for berger\n enter 2 for pizza\n enter 3 for pasta\n enter 4 for sandwich \n enter 5 for french_fries");
    //if you don't want to order another item enter 0
    x:
    scanf("%d",&i);
    switch(i)
    {
        case 1:
              total+=burger;
              goto x;
        case 2:
              total+=pizza;
              goto x;
        case 3:
              total+=pasta;
              goto x;
        case 4:
              total+=sandwich;
              goto x;
        case 5:
              total+=french_fries;
              goto x;
        case 0:
              printf(" total is %d",total);
              break;
        default:
              printf("ans is %d",total);
              goto x;

    }
}
