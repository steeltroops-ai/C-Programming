#include <stdio.h>
int main(){
    char c;
    printf("Enter the Caracter :");
    scanf("%c",&c);

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    printf("%c is an Alphabet",c);
    else
    printf("%c  is not an Aplhabet",c);
    return 0;
} 