//WAP to find the roots of a quadratic equation(only for D>0)
#include<stdio.h>
#include<math.h>
int main()
{
    float root1, root2;
    float a,b,c;
    
    printf("Enter the coefficient of x^2\n");
    scanf("%f",&a);
    
    printf("Enter the coefficient of x\n");
    scanf("%f",&b);
    
    printf("Enter the constant value\n");
    scanf("%f",&c);
    
    root1 = (-b+sqrt(b*b - 4*a*c))/(2*a);
    printf("root 1 is%f\n", root1);
    
    root2 = (-b-sqrt(b*b - 4*a*c))/(2*a);
    printf("roots 2 is%f\n", root2);
    
}