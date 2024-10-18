#include <stdio.h>
int main(){
    int i,j,m,n;
    int a[m][n];
    int sum=0;
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Row Sum
    printf("Row Total: ");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            sum+=a[i][j];
        }
        printf("  %d",sum);
        sum=0;
    }
    //
    printf("\nColumn Sum: ");
    for(j=0;j<5;j++){
        for(i=0;i<5;i++){
            sum+=a[i][j];
        }
        printf("  %d",sum);
        sum=0;
    }
}