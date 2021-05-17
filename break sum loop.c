#include<stdio.h>

void main(void){
int i;
float sum=0,amount;
for(;;){
    scanf("%f",&amount);
    if(amount<0)break;
    sum=sum+amount;
}
printf("\nTotal sold=%f",sum);
return 0;
}



