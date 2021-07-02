#include<stdio.h>
#include<math.h>
#include<math.h>
int main ()
{
    float f,i,h,w,bmi;
    printf("Hey guys!!you can now check your BMI here\n");
    printf("Enter your height\nFeet:");
    scanf("%f",&f);
    printf("Inches:");
    scanf("%f",&i);

    h=((f*12)+i)*0.0254;

    printf("Enter your weight in Kg:\n");
    scanf("%f",&w);

    bmi=w/(h*h);
    printf("Your BMI is:%f",bmi);

    if (bmi>=40)
        printf("\nYou are a Mammoth!!\a\a");
    else if (bmi>=35)
        printf("\nYou are an elephant!!\a\a");
    else if(bmi>=30)
        printf("\nYou are a khashi!!\a\a");
    else if(bmi>=25)
        printf("\nyou are a mota!!\a");
    else if(bmi>=19)
        printf("\nyou are fit but if you keep eating,you will become hati!!hahaha!!");
        else
            printf("\nYou are underweight\a");
}
