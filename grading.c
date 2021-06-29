#include<stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter your marks: \n");
    scanf("%d",&marks);
    if (marks>=0 && marks<=100){

    //grading system block



  if (marks>=80)
    {
        grade='A+';
        printf("Your grade is %c\n",grade);
    }
    else if (marks>=70)
    {
        grade='A';
        printf("Your grade is %c\n",grade);
    }
        else if (marks>=60)
    {
        grade='A-';
        printf("Your grade is %c\n",grade);
    }

   else if (marks>=50)
    {
        grade='B';
        printf("Your grade is %c\n",grade);
    }
        else if (marks>=45)
    {
        grade='C';
        printf("Your grade is %c\n",grade);
    }
        else if (marks>=40)
    {
        grade='D';
        printf("Your grade is %c\n",grade);
    }
        else if (marks>=33)
    {
        grade='E';
        printf("Your grade is %c\n",grade);
    }
    else {
        printf("Bloody chap!!You have failed!!Go and read!!\n");
    }
    //end of grading system block
 }
 else
    printf("sorry!!out of range!!\n");
    return 0;
}
