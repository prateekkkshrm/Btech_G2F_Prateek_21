//WAP to find the roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    
    printf("Enter the number\n");
    scanf("%f",&a);
    if(a>0)
    {
    printf("Number is positive\n", a);
    }

    else if (a<0)
    {
        printf("number is negative\n", a);
    }

    else
    {
        printf("number ia a zero\n", a);
    }


return 0;

}