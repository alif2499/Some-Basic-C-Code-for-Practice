#include<stdio.h>

void main (void)
{
    int i;
    i=0;
    for (;;){
        printf("%d\n",++i);
        if (i>100)break;
    }
}
