#include <stdio.h>
int main(){
    int rows,i,j,space;
    printf("Enter the number of rows :");
    scanf("%d",&rows);

    for (i=rows;i>=1;--i){
        for (space=0;space<rows-i;++space){
            printf("   ");
            for(j=i;j<=2*i-1;++j)
            
        }

    }
}