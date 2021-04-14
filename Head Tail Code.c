#include<stdio.h>

void main (void)
{
    int j,i,ct[60];
    srand(time(NULL));
    i=rand();
    j=i%2;
    if (j==0)
        printf("Head");
    else
        printf("Tail");

}

