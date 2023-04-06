#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10][10],b[10][10],mul[10][10],i,j,k,m,n;
    system("cls");
    printf("Enter rows and columns of matrix:");
    scanf("%d%d",&m,&n);
    printf("\nEnter the Matrix: ");
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second Matrix Element: ");
    for (i=0; i<m;i++){
        for (j=0; j<n; j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Multiple of Matrixes : \n");
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            mul[i][j] = 0;
            for(k=0; k<n; k++){
                mul[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}