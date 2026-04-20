
#include <stdio.h>

int main(void)
{
    int a,b;
    int c=0;
    
    scanf("%d",&a);
    printf("%d\n", a);
    
    do{
        scanf("%d",&b);
        c+=1;
        
        if(a>b){
            printf("%d>? \n",a);
        }
        else if(a<b){
            printf("%d<?\n",a);
        }
        else{
            printf("%d==?\n",a);
        }
    
    }while(a!=b);
    
    printf("%d\n",c);
    return 0;
}
