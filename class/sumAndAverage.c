#include<stdio.h>
int main(){
    int i,j,m,n;
    float arr[10][10],sum=0.0,avg;

    printf("Enter row and column size\n");
    scanf("%d%d",&m,&n);
    printf("Enter the matrix elements:\n ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]",i,j);
            scanf("%f",&arr[i][j]);
        }
    }
    //Sum and Average
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
    }
    avg=sum/(m*n);
    printf("Sum=%f\n",sum);
    printf("Average=%f",avg);
}