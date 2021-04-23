#include<stdio.h>

int main(void)
{
    int bp[31],days,i,hbp,lbp,sum,avg;
    printf("Enter number of days in the month:\n");
    scanf("%d",&days);

    for(i=0;i<days;i++){
        printf("Enter daily blood pressure%d=",i+1);
        scanf("%d",&bp[i]);
    }
    sum=0;
    for(i=0;i<days;i++)sum=sum+bp[i];
            printf("Average blood pressure is:%d\n",avg=sum/days);


    lbp=20;
    hbp=150;
    for(i=0;i<days;i++){
        if(lbp>bp[i])lbp=bp[i];
        if(hbp<bp[i])hbp=bp[i];

}
printf("\nMinimum blood pressure is:%d",lbp);
printf("\nMaximum blood pressure is:%d",hbp);
}
