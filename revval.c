#include <stdio.h>

int main() {
    int r, rev=0,n,i;
    printf("enter value");
    scanf("%d", &n);
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("rverse is%d", rev);

    return 0;
}
