#include <stdio.h>
void main(){
    char a[100];
    int c=0;
    scanf("[^|n]",a);
    for(int i=0;a[i];i++)
    c++;
    for(int i=0;a[i];i++)
    printf("%c",a[i]);
}