#include<stdio.h>

int main ()
{
    char chr;

    scanf("%c",&chr);
    if(chr>='0'&&chr<='9'){
        printf("Digit\n");
    }

        else {
            printf("Not a digit\n");
        }
    return 0;
}
