#include <stdio.h>
void main()
{
    int m, n, c;
    m = 21;
    while (m > 1)
    {
        printf("Choose the matchstckis Between 1 to 4 Only :\n");
        scanf("%d", &n);
        if (n > 4)
        {
            printf("Invalide Input !!");
            break;
        }
        m = m - n;
        printf("Computer Picked\n");
        c = 5 - n;
        m = m - c;
        printf("%d\n", c);
        printf(" left m=%d\n", m);
        if (m == 1)
        {
            printf("you are looser");
        }
    }
}