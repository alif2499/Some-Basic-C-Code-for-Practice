

#include<stdio.h>
#include<float.h>
#include<math.h>
int main()
{
    float f,i,h,w,bmi;
    printf("HEALTH ASSISTANT\n");
    printf("Enter your height\nFeet: ");
    scanf("%f",&f);
    printf("Inches:");
    scanf("%f",&i);

    h=((f*12)+i)*0.0254;

    printf("Enter your weight in Kg:");
    scanf("%f",&w);

    bmi=w/(h*h);

    printf("Your BMI score is:%f\n",bmi);
    if(bmi>=40)
        printf("Obesity Level 3");
    else if(bmi>=35)
        printf("Obesity Level 2");
    else if(bmi>=30)
        printf("Obesity level 1");
    else if(bmi>=25)
        printf("Overweight");
    else if(bmi>=19)
        printf("You Are Fit");
    else
        printf("You Are Underweight");
return 0;
}
