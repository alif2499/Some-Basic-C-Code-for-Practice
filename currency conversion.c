#include<stdio.h>
#include<float.h>

void main (void)
{
    int dollar,rate;
    float taka;
    printf("Enter Dollar\n");
    scanf("%d",&dollar);

    printf("Enter exchange rate\n");
    scanf("%d",&rate);

    taka=dollar*rate;
    printf("\nTaka=%f",taka);

    return 0;
}
