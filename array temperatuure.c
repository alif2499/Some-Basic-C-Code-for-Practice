#include<stdio.h>

int main(void)
{
    int temp [31],i,min,max,avg;
    int days;

    printf("How many days in the month?\n");
    scanf("%d",&days);

    for (i=0;i<days;i++){
        printf("Enter temperature %d=",i+1);
        scanf("%d",&temp[i]);
    }
    avg=0;
    for(i=0;i<days;i++) avg=avg+temp[i];
    printf("The average temperature is:%d\n",avg/days);
}

