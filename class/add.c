#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the elements: "); 
    scanf("%d",&n);
    int a1[n],a2[n],a3[2*n];
    printf("Enter first array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a1[i]);
    printf("Enter second array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a2[i]);
    for(i=0;i<n;i++){
    a3[i]=a1[i];
    }
    for(i=0,j=n;j<n && i<n;i++,j++){
    a3[j]=a2[i]; 
    }
    for(i=0;i<n;i++){
        printf("%d ",a3[2*n]);
    }
    return 0;
}