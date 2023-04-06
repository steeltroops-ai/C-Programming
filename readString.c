#include <stdio.h>
int main(){
    char name[20];
    printf("Enter your name: ");
    scanf("%s",name);
    printf("\nYour name is %s.\n",name);
    

//2nd Method
    char name1[20];
    printf("Enter your name: ");
    gets(name1);
    printf("Name:");
    puts(name1);
}
