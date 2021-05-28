#include<stdio.h>

void main (void)
{
    int j,i,roll,m,ct[60];
    srand(time(NULL));
    for (i=0;i<=59;i++){
        ct[i]=1+rand()%20;
        printf("Roll:%d=%d\n",i+61,ct[i]);

}
m=ct[0];
roll=0;
for(i=1;i<=59;i++){
    if(m<ct[i])
(m=ct[i];roll=i;)
}
printf("Roll=%d Marks=%d\n",roll+61,m);
}



