
#include <stdio.h>

int main(void)
{
    int a,b=0;
    int c=0;
    
    scanf("%d",&a);
    printf("정답입력:%d", a);
    
    do{
        scanf("%d",&b);
        c+=1;
        
        if(a>b){
            printf("%d보다 낮습니다. \n",a);
        }
        else if(a<b){
            printf("%d보다 높습니다.\n",a);
        }
        else{
            printf("%d 정답입니다.\n",a);
        }
    
    }while(a!=b);
        
    
    
    printf("시도횟수는 %d회\n",c);
    return 0;
}
