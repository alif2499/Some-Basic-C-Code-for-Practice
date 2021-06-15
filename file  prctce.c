#include<stdio.h>
int main ()
{
    FILE *ax;
    ax=fopen("a.txt","w");
    char bx[100];
    gets(bx);
    fputs(bx,ax);
}
