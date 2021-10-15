#include<stdio.h>

int main()
{
    int num1, num2, num3;
    float ave;  

    printf("enter 3 integers:");
    scanf("%d%d%d",&num1,&num2,&num3);

    ave=(num1+num2+num3)/3.0;
    printf("average=%.2f\n",ave);
    return 0;

}