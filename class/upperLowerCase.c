#include <stdio.h>
int main(){
    char x;
    printf("Enter the Character :");
    scanf("%c",&x);
    if (x>='a' && x<='z')
    {
        printf("Given Character is Lowercase.");
    }
    else if (x>='A' && x<='Z')
    {
        printf("Given Character us Uppercase.");
    }
    else
    printf("Enter the right character again.");
    return 0;    
}