#include <stdio.h>
void main(){
    char a[100];
    int c=0;
    scanf("%[^\n",&a);
    for(int i=0;a[i];i++){
        if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u'|| a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U')
        c++;
        }
    printf("Number of characters: %d\n",c);
}