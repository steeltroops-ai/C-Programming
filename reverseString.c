#include <stdio.h>
#include <string.h>
void reverseString(char* str){
    int l,i;
    char *begin_ptr,*end_ptr,ch;
    l=strlen(str);
    begin_ptr=str;
    end_ptr=str;
    for(i=0;i<l-1;i++){
        *end_ptr++;
    }
    for(i=0;i<l/2;i++){
        ch=*end_ptr;
        *end_ptr=*begin_ptr;
        *begin_ptr=ch;

        begin_ptr++;
        end_ptr--;
    }
}
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str,100,stdin);
    reverseString(str);
    printf("\nReverse of the string: %s\n",str);
    return 0;
}
