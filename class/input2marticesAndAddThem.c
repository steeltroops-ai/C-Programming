#include <stdio.h>
int main() {
    int i,j,m,n;
    int a[10][10],b[10][10],sum[10][10];
    printf("Enter the row and columns :\n");
    scanf("%d%d",&m,&n);
    printf("Enter the first matrix :\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
         scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the second matrix :\n");
    for(i=0; i<m;i++){
        for(j=0; j<n; j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nSum of entered matrixes : - \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

        