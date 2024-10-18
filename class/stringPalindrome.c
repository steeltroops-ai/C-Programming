#include <stdio.h>
#include <string.h>
void checkPalindrome(char* string){
    int length;
    char *fwd, *rev;
    length=strlen(string);
    fwd=string;
    rev=fwd+length-1;
    for(fwd=string;rev>=fwd;){
        if(*rev==*fwd){
            rev--;
            fwd++;
        }
        else
        break;
    }
    if (fwd>rev){
    printf("String is checkPalindrome.\n");
    }
    else
    printf("String is not Palindrome.");
}
int main(){
    char str[100];
    printf("Enter the String: ");
    fgets(str,100,stdin);
    checkPalindrome(str);
    return 0;
}