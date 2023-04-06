#include <stdio.h>
int main() {
    int i,j,m,n,arr[10][10];
    printf("Enter the rows and columns of matrix: ");
    scanf("%d %d",&m,&n);
    printf("\nEnter the matrix: ");
    for(i=0; i<m; i++){
        for(j=0; j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nUpper Triangular Matrix:\n");
    for(i=0; i<m; i++){
        printf("\n");
        for(j=0; j<m; j++){
            if(i>j){
                printf("0");
                printf("\t");
            }
            else{
                printf("%d\t",arr[i][j]);
            }
        }
    }
    printf("\n\nLower Triangular Matrix:\n");
    for(i=0; i<m; i++){
        printf("\n");
        for(j=0; j<m; j++){
            if(i>=j){
                printf("%d\t",arr[i][j]);
            }
            else{
                printf("0");
                printf("\t");
            }

        }
    }
    return 0;
}