#include <stdio.h>
int main(){
    char c,str[100];
    int i,count = 0;
    printf("Enter the string: ");
    gets(str);
    printf("\nEnter character to be searched : ");
    c=getchar();
    for(i=0;str[i];i++){
        if(str[i]==c){
            count++;
        }
    }
    printf("\nCharacter '%c' occurs %d times \n",c,count);
    return 0;
}