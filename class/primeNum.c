#include <stdio.h>
void main(){
    int i,num,n,c;
    printf("Enter Number: \n");
    scanf("%d",&n);
    printf("Prime Number: %d\n",n);
    for(num=1;num<=n;num++) {
        c=0;
        for(i=2;i<=num/2;i++) {
            c++;
            break;
        }
    }
    if(c==0 && num!=1)
    printf("%d",num);
}

