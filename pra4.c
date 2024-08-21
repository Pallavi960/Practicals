#include<stdio.h>
//program to calculate the count illiterate man and women
//student id:24TCEIOT
void main()
{  int total_population=1441981744;
   float women_pr=48.4,total_women, total_men, Literate_men,Literate_women,illiterate_men,illiterate_women,
                  women_literacy_rate=62.84,men_literacy_rate=80.95;
   

    total_women =(total_population*women_pr)/100;
    total_men=total_population- total_women;
    Literate_men=(total_men*men_literacy_rate)/100;
    Literate_women=(total_women*women_literacy_rate)/100;
    illiterate_men= total_men- Literate_men;
    illiterate_women=total_women-Literate_women;
    printf(" total illiterate men:%f\n",illiterate_men);
    printf(" total illiterate women: %f",illiterate_women);
    
}









