#include<stdio.h>
//programer:pallavi verulkar
void main()
{   //input the value
    int total_raman,total_suman,raman_bunglow=12000000,raman_car=3000000,raman_plot=6000000,suman_apartment=11000000,suman_car=3000000,suman_hotel=8000000;
    total_raman=raman_bunglow+raman_car+raman_plot;
    total_suman=suman_apartment+suman_car+suman_hotel;
    //to check who is wealthier
    if(total_raman>total_suman)
    {
     printf("raman is wealthier then suman");
    }
    else if(total_raman<total_suman)
    {
     printf("suman is wealthier then raman");
    }
    else
    {
     printf("both are equal wealthier");
    }

}
