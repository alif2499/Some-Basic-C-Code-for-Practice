#include<stdio.h>
int main ()
{
    double cse[3][4];
    int c,r;

    for(c=0;c<3;c++){
        for(r=0;r<4;r++){
            scanf("%lf",&cse[c][r]);
    }
    }
    for(c=0;c<3;c++){
        for(r=0;r<4;r++){
            printf("Class %d Roll %d Marks %lf\n",c+6,r+1,cse[c][r]);
        }
    }
}
