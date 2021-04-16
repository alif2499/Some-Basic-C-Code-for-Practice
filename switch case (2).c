#include<stdio.h>

void main(void)
{
    int Buffon;
    printf("Enter your Gf's number:");
    scanf("%d",&Buffon);
    switch(Buffon){

    case 1: printf("your 1st Gf  is Atel no1\n"); break;
    case 2: printf("your 2nd Gf is Atel no 2\n"); break;
    case 3: printf("your 3rd Gf  is Atel no 3\n"); break;
    case 4: printf("your last Gf is Atel no 4\n"); break;
    default:
    printf("You are a D.Head");
}
}
