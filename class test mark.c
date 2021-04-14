#include<stdio.h>

void main (void)
{
    int i,j,m,roll,r,ct[60];
    srand(time(NULL));

    for(i=0;i<=59;i++){
        ct[i]=1+rand()%20;
        printf("Rolls:%d=%d\n",i+61,ct[i]);

    }
    m=ct[0];
    for(i=1;i<=59;i++){
        if(m<ct[i])
        {
            m=ct[i];
        }
    }
    while(2>1){
        printf("\nEnter your roll:");
        scanf("%d",&r);
        if(r<0)break;
        for(i=0;i<60;i++)
            if(i==r-61)
            printf("\nYour marks=%d\n",ct[i]);
    }

}


