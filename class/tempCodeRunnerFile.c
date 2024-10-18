#include <stdio.h>
int main() {
    int i,j,m,n;
    int a[10][10],b[10][10],sum[10][10];
    printf("Enter the row and columns :\n");
    scanf("%d%d",&m,&n);
    printf("Enter the first matrix :\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
         scanf("%d",a[i][j]);
        }
    }