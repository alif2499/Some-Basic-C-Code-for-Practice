#include<stdio.h>

int main()
{
    char chr;
    scanf("%c",&chr);

    if(chr>='0'&&chr<='9'){
        printf("DIGIT\n");
    }
    else{
        printf("NOT A DIGIT\n");
    }
    return 0;
}

