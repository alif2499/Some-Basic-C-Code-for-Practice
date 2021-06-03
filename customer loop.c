#include<stdio.h>

void main(void){
int i=1;
float sum=0,amount;
for(;;){
        printf("\nEnter amount for customer #%d",i++);
    scanf("%f",&amount);
    if(amount<0)break;
    sum=sum+amount;
}
printf("\nTotal sold=%f",sum);
return 0;
}




