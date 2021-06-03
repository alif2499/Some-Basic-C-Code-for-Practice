#include<stdio.h>

void main (void)
{
    int j,i;
    srand(time(NULL));
    i=rand();
    j=1+i%6;
    printf("%d\n",j);


}


