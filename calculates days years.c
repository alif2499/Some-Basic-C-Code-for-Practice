#include<stdio.h>

int main()
{
    int x,y,m,d;

printf("Enter days:\n");
scanf("%d",&x);

y=x/365;
printf("\nYears=%d",y);

m=(x%365)/30;
printf("\nMonths=%d",m);

d=(x%365)%30;
printf("\nDays=%d",d);

return 0;
}
