#include <stdio.h>

int main() {
    int n, i, fact=1;
    

    printf("Enter a value: ");
    scanf("%d", &n);

        
        for (i = 1; i <= n; i++) {
            fact = fact*i; ;
        }
        printf("Factorial of =%d  \n", fact);
    

    return 0;
}
