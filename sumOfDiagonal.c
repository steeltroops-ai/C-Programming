#include <stdio.h>
int main(){
    int i,j,m,n,sum=0;
    printf("Enter the row and column of matrix  :");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the array: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //diagonal matrix
    for(i=0; i<m; i++){
        for(j=0; j<n;j++){
            if(i==j){
                sum=sum+a[i][j];
            }
        }
    }
    printf("\nThe Sum of diagonal matrix is : %d\n", sum);
}