// WAP TO CREATE A SIMPLE CALCULATOR USING SWITCH CASE
#include <stdio.h>

int main() {
    // Write C code here
    char op;
    float num1, num2, result;

    printf("SIMPLE CALCULATOR\n");
    printf("enter the operator(+,-,*,/,)\n");
    scanf("%c", &op);
    
    printf("ENTER THE VALUE 1\n");
    scanf("%f", &num1);
    
    printf("ENTER THE VALUE 2\n");
    scanf("%f", &num2);
    
    switch (op)
    {
    case '+':

        result = num1 + num2;
        printf("result =%f", result);
        break;

     case '-':

        result = num1 - num2;
        printf("result =%f", result);
        break;

     case '*':

        result = num1 * num2;
        printf("result =%f", result);
        break;

     case '/':

        result = num1 / num2;
        printf("result =%f", result);
        break;
    
    
    default:
            printf("Invalid operator!");

    }
    
    

    return 0;
}