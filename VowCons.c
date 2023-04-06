#include <stdio.h>
int main(){
    char character;
    printf("Enter the character you wish:");
    scanf("%c",&character);

    switch(character){
        case 'a':printf("Given character is Vowel");break;
        case 'e':printf("Given character is Vowel");break;
        case 'i':printf("Given character is Vowel");break;
        case 'o':printf("Given character is Vowel");break;
        case 'u':printf("Given character is Vowel");break;
        case 'A':printf("Given character is Vowel");break;
        case 'E':printf("Given character is Vowel");break;
        case 'I':printf("Given character is Vowel");break;
        case 'O':printf("Given character is Vowel");break;
        case 'U':printf("Given character is Vowel");break;
        default: printf("Given character is Consonant");break;
    }
    return 0;
}