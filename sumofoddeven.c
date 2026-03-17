#include<stdio.h>
int main () {
    int even=0, odd=0,n,i;
    printf("\nenter the value N of natural no. \n");
    scanf("%d", &n);
    for(i=1; i<=n ;i++)
    { 
        if(i%2==0)
        even=even+i;
        else
        odd=odd+i;
    }
    printf("sum of even no=%d \n", even);
    printf("sum of odd no=%d \n", odd);
    
    return 0;
}
