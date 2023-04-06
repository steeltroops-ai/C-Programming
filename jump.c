/*
#include <string.h>
int main(){
    int a=1;            
    if(a<=5){
        printf("%d",a);
        a++;
        goto;
    }
}
*/


/*
#include <stdio.h>
int main(){
    int a=1,b=1;
    while(a<=3){
        while(b<=3){
            if (a==b)
            printf("%d%d",a,b);
            break;
        }
        a++;
        b++;
    }
}
*/

/*
#include <stdio.h>
int main(){
    int a=1,b=1;
    while(a<=3){
        while(b<=3){
            if (a==b)
            printf("%d%d",a,b);
            break;
        }
        a++;
    }
    b++;
}
*/


/*
#include <stdio.h>
int main(){
    int a=1,b=1;
    while(a<=3){
        while(b<=3){
            if (a==b){
                break;
            }
            printf("%d%d",a,b);
            b++;
        }
        a++;
    }
}
*/

/*
#include <stdio.h>
int main(){
    int a=1,b=1;
    while(a<=3){
        while(b<=3){
            if (a==b){
                continue;
            }
            printf("%d%d",a,b);
            b++;
        }
        a++;
    }
}
*/

/*
#include <stdio.h>
int main(){
    int a=1,b=1;
    while(a<=3){
        while(b<=3){
            if (a==b){
                b++;
                continue;
            }
            printf("%d%d",a,b);
        }
        a++;
    }
}
*/


/*
#include <stdio.h>
int main(){
    int a=1,b=1;
    while(a<=3){
        while(b<=3){
            if (a==b){
                b++;
                continue;
            }
            printf("%d%d",a,b);
            b++;
        }
        a++;
    }
}
*/

/*
#include <stdio.h>
int main()
  {
		int x=3,y=4,z=4;
		printf("ans= %d", z>=y&&y>=x?1:0);
return 0;
   }
*/