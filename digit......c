#include<stdio.h>
#include<math.h>
int main ()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);

    if(isdigit(c)==1)
        printf("digit\n");
    else
        printf("Not a digit\n");

    return 0;
}
