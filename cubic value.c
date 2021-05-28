#include<stdio.h>
#include<math.h>
main ()
{
    float x,y;
    printf("Enter a number to get cubic value:\n");
    scanf("%f",&x);

    y=pow(x,3);
    printf("cubic value=%f",y);
    return 0;
}
