#include <stdio.h>
int main() {
    int n;
    int key,i,size,index=-1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array : ");
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("Enter the element to delete: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++){
        if(a[n]==key)
            index=i;break;
    }
    if(index!=-1){
        for(i=index;i<size-1;i++)
        a[i]=a[i+1];

        printf("New Array :");
        for(i=0;i<size-1;i++)
        printf("%d ", a[i]);
    }
    else
    printf("Element Not Found");
    return 0;
}