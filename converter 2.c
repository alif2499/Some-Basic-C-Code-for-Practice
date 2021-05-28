#include<stdio.h>

main(void)
{
    int taka,dollar,rupee,dinar,n;
    float rate;
    printf("For exchanging dollar press 1\nFor  exchanging rupee press 2\nFor exchanging dinar press 3\n");
    scanf("%d",&n);

    if(n==1){
             printf("Enter amount in dollar:\a\n");
    scanf("%d",&dollar);

    printf("Enter exchange rate:\a\n");
    scanf("%f",&rate);

    taka=dollar*rate;

    printf("Amount in taka is:%d ",taka);
    }
    else if(n==2){

    printf("Enter amount in rupee:\n");
    scanf("%d",&rupee);

    printf("Enter exchange rate:\n");
    scanf("%f",&rate);

    taka=rupee*rate;

        printf("Amount in taka is:%d ",taka);
    }
    else if(n==3){

    printf("Enter amount in dinar:\n");
    scanf("%d",&dinar);

    printf("Enter exchange rate:\n");
    scanf("%f",&rate);

    taka=dinar*rate;

        printf("Amount in taka is:%d ",taka);
    }


    return 0;
}

