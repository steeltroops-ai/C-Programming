#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main(){
    char str[MAX_SIZE];
    printf("Enter your text : ");
    gets(str);
    strupr(str);
    printf("Uppercase String : %s",str);
    return 0;
}