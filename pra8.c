#include<stdio.h>
//name:pallavi verulkar
//Id:24TEIOT
int main()
{
    int burger=150,pizza=100,pasta=120,sandwich=100,french_fries=80;
    int total=0;

    int i;
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
    return 0;
}
