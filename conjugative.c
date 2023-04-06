#include <stdio.h>
void main(){
    long long int a,new,last=1,m,c;
    printf("ENter the number: \n");
    scanf("%d",&a);
    while(a!=0){
        new = a%10;
        if (new == last){
            m+=1;
            if(m=3){
                c+=1;
                m=0;
            }
        }
        else{
            last=new;
            m=0;
        }
        a/10=0;
        
    }
}

