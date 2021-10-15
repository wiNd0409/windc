#include <stdio.h>

int main()
{
    int year;
    printf ("year :");
    scanf("%d",&year);
    
    if (year % 4 == 0)
     
    {
        if (year % 100 != 0)
        {
            printf("%d la nam nhuan",year);
        }
        else
        {
            printf("%d ko la nam nhuan",year);
        }
    }
    else if (year % 400 == 0) 
    {
        printf("%d la nam nhuan",year);
    }
    else
    {
            printf("%d ko la nam nhuan",year);
    }
    return 0;
}