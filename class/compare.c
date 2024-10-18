#include <stdio.h>
#include <string.h>
int main(){
    char str1[20];
    char str2[20];
    int value;
    printf("Enter the first string : ");
    gets(str1);
    printf("\nEnter the second string : ");
    gets(str2);

    value=strcmp(str1,str2);
    if (value==0) 
    printf("String are same.");
    else
    printf("String are different");
    return 0;
}
