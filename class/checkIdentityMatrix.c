#include <stdio.h>
int main() {
    int i,j,m,n,flag=1;
    int arr[10][10];
    printf("Enter row and column numbers:\n");
    scanf("%d%d",&m,&n);
    printf("\nEnter the matrix elements:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0; i<m; i++){
        for (j=0; j<n; j++){
            if(arr[i][j]!=1 && arr[i][j]!=0){
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        printf("\nEntered Matrix is an identity matrix\n");
    }
    else{
        printf("\nMatrix is not an Identity Matrix\n");
    }
    return 0;
}