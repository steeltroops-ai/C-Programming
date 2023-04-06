#include<stdio.h>
#include<string.h>
#define MAX_SIZE 10000
int main(){
    char str[MAX_SIZE];
    printf("Enter your text : ");
    gets(str);
    strlwr(str);
    printf("\nLower case string : %s",str);
    return 0;
}