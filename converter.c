#include<stdio.h>

main(void)
{
    int taka,dollar,rupee,dinar,n;
    printf("For exchanging dollar press 1\nFor  exchanging rupee press 2\nFor exchanging dinar press 3\n");
    scanf("%d",&n);

    if(n==1){
             printf("Enter amount in dollar:\n");
    scanf("%d",&dollar);
    taka=dollar*80;

    printf("Amount in taka is:%d ",taka);
    }
    else if(n==2){

    printf("Enter amount in rupee:\n");
    scanf("%d",&rupee);
    taka=rupee*2;

        printf("Amount in taka is:%d ",taka);
    }
    else{

    printf("Enter amount in dinar:\n");
    scanf("%d",&dinar);
    taka=dinar*160;

        printf("Amount in taka is:%d ",taka);
    }


    return 0;
}
