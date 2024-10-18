#include <stdio.h>
#include <conio.h>
int main(){
    int a[10],i,n,key,pos;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter Element in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

//^Count and print Even or Odd Numbers
int count_even=0, count_odd=0;
for(i=0;i<n;i++){
    if(a[i]%2==1){
    count_odd++;
    }
    else {
    count_even++;
    }
}
printf("\nOdd Numbers: %d \n",count_odd);
printf("Even Number: %d \n",count_even);

printf("\nEven Numbers in array:-\n");
for(i=0;i<n;i++){
    if(a[i]%2==0){
        printf("%d\t",a[i]);
    }
}
printf("\nOdd Numbers in array:-\n");
for(i=0;i<n;i++){
    if(a[i]%2==1){
        printf("%d\t",a[i]);
    }
}
return 0;



/*
~ Deletion of an element in array
printf("\nEnter the postion of element that u want to delete:");
scanf("%d",&pos);
if(pos>=n+1){
    printf("Deletion is not possible.");
}
else{
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    printf("\nThe resultant array is:\n");
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        printf("%d\n",a[i]);
    }
    return 0;
}
*/


/*  
^Find a Element from the array. 
    printf("Enter the key: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("Element Found.");
            return 0;
        }
        else{
            printf("Element Not Found.");
        }
    }
*/
}