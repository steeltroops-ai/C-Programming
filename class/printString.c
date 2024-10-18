#include <stdio.h>
int main(){
    char str[100];
    char *p;
    printf("Enter the string: ");
    fgets(str,100,stdin);
    p=str;
    printf("\nThe input stirng is: ");
    while(*p!='\0')
    printf("%c", *p++);
    return 0;

}