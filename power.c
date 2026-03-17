#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1; 

   
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent number (positive integer): ");
    scanf("%d", &exponent);

    
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    
    printf("%d to the power of %d is = %d\n", base, exponent, result);

    return 0;
}
