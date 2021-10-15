#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Nhập a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    float m=a;

    if ( m<b)
      { m=b;
      }
    
    if (m<c)
      { m=c;
      }
        
    printf("Max : %.2f",m);

    return 0;  
}