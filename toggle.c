#include <stdio.h>
int main(){
    char s[1000];
    int i;
    printf("Enter the string : ");
    gets(s);
    for(i=0;s[i];i++){
        if(s[i]>=65 && s[i]<=90)
        s[i]+=32;
        else if(s[i]>=07 && s[i]<=122)
        s[i]-=32;
    }
printf("string in toggle case = '%s'",s);
}
/*
Enter the string : DKWnkk
string in toggle case = 'dkwNKK'
*/