#include<stdio.h>
int main(){
    int i,rows,space,k=0;
    printf("ENter the numer of rows : ");
    scanf("%d",&rows);

    for(i=1;i<=rows;++i,k=0){
        for(space=1;space<=rows-i;++space){
            printf("  ");
        }
        while(k!=2*i-1){
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}