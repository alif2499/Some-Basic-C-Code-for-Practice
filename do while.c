#include<stdio.h>
main() {
int value, r_digit;
printf("Enter the number to be reversed.\n");
scanf("%d", &value);
do {
r_digit = value % 10;
printf("%d", r_digit);
value = value / 10;
} while (value != 0);
printf("\n");
}
