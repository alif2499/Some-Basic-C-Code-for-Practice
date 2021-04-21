#include<stdio.h>

int main(void)
{
    int i,temp[31],min,max,sum,avg,days;



    printf("How many days in the month?\n");
    scanf("%d",&days);


    for (i=0;i<days;i++){
        printf("Enter temperature %d=",i+1);
        scanf("%d",&temp[i]);
    }
    sum=0;
    for(i=0;i<days;i++) sum=sum+temp[i];

    printf("The average temperature is:%d\n",  avg=sum/days);

    min=250;
    max=0;
    for(i=0;i<days;i++){
        if(min>temp[i])min=temp[i];
        if(max<temp[i])max=temp[i];
    }
    printf("Minimum temperature is:%d\n",min);
    printf("Maximum temperature is:%d\n",max);

    return 0;
}
