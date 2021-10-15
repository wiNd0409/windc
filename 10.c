#include <stdio.h>

int main()
{
    int a ;
    printf ("nhap a :");
    scanf("%d",&a);
    
    if (a % 2 == 0)
    {
    printf("%d là số chẳn ",a);
    } 
    else  
    {
    printf("%d là số lẻ",a);
    }
   
    return 0;
}