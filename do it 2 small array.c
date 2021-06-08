#include<stdio.h>

int main (void)
{
    int value[25],i,num,min;
    printf("Enter  number\n");
    scanf("%d",&num);

    for(i=0;i<num;i++){
        printf("Enter value%d=",i+1);
        scanf("%d",&value[i]);
    }
    min=0;
    if(min>value[i])min=value[i];
    printf("Minimum value=%d\n",min);
}
