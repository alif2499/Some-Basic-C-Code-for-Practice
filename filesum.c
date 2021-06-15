#include<stdio.h>
int main()
{
    FILE *input,*output;

    input=fopen("input.txt","r");
    output=fopen("output.txt","w");

    int x,y,sum;
    fscanf(input,"%d %d",&x,&y);
    sum=x+y;
    fprintf(output,"Sum=%d",sum);
}
