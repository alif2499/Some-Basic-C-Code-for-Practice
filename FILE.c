#include<stdio.h>

void main (void)
{
    FILE  *alif,*myfr;
    int a,b;
    alif=fopen("d:\\mytest 1.dat","r");
    myfr=fopen("d:\\mytest 2.dat","w");

    fscanf(alif,"%d %d",&a,&b);
    fprintf(myfr,"sum=%d",a+b);

    fclose(alif);
    fclose(myfr);
}
