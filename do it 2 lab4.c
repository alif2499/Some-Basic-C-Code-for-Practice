#include<stdio.h>
int main()
{
   int count=0,digit;
   printf("Enter a number:\n");
   scanf("%d",&digit);
   while(digit!=0){
    digit=digit/10;
    count++;
   }
   printf("DIGIT=%d",count);

   return 0;
}
