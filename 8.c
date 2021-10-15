#include <stdio.h>

int main()
{
    float a,b;
    printf("nhap a,b:");
    scanf("%f%f",&a,&b);
    float m=a ;
    if (m<b)
        m=b;
    printf("Max : %.2f",m);

    return 0;  
}