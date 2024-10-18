#include <stdio.h>
int main(){
    int i,j,m,n,a[10][10],total=0;
    printf("\nEnter the row and column of matrix: ");
    scanf("%d%d",&m,&n);
    printf("\nEnter the matrix:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0){
                total++;
            }
        }
    }
    if(total>(i*j)/2){
        printf("\nEntered Matrix is a Sparse Matrix.");
    }
    else{
        printf("\nEntered Matrix is a dense Matrix.");
    }
}