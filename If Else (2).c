#include<stdio.h>
#include<math.h>
void main(void)
{
    int amount;
    printf("Enter your amount:");
    scanf("%d",&amount);

    if(amount>=3000)
        printf("Airplane");
    else
        if(amount>=1000)
        printf("AC Bus");
    else
     if(amount>500)
    printf("Train");
    else
        printf("SORRY!!");
}
