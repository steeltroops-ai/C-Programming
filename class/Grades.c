#include <stdio.h>
 int main(){
     int marks;
     printf("Enter the marks :-");
     scanf("%d",&marks);
    
    if (marks>90 && marks<=100)
    printf("Garde - O");
    else if (marks>80 && marks<=90)
    printf("Garde - A");
    else if (marks>70 && marks<=80)
    printf("Garde - B");
    else if (marks>60 && marks<=70)
    printf("Garde - C");
    else if (marks>50 && marks<=60)
    printf("Garde - D");
    else 
    printf("You failed");
    return 0;
 }