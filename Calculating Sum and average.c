#include<stdio.h>
int main ()
{
    float x,i,sum=0,avg;

    printf("Total number of values: ");
    scanf("%f",&x);
    for(i=0;i<=x;i++){
        scanf("%f",&i);
        sum=sum+i;
    }
    printf("Sum is=%.3f",sum);
    avg=sum/x;
    printf("Average is %.3f",avg);
}
