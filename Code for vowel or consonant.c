// WAP TO CHECK IF A CHARACTER IS VOWEL OR CONSONANT
#include <stdio.h>

int main() {
    // Write C code here
    char l;
    printf("ENTER THE CHARACTER\n");
    scanf("%c",&l);
    
    if(l== 'a'||l=='e'||l=='i'||l=='o'||l=='u')
    {
    printf("Letter is a vowel\n");
    }
    else

        printf("letter is a consonant\n");
    

    return 0;
}