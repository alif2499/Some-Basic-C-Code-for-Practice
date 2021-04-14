
#include<stdio.h>

int main()
{
    int a,b,c,d;

    printf("Enter days: ");
    scanf("%d",&a);

    b=a/365;
    printf("Year: %d\n",b);

    c=a%365;
    d=c/30;

    printf("Months: %d\n",d);

    d=c%30;
    printf("Days: %d\n",d);

    return 0;
}
