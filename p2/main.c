#include <stdio.h>

int main(void) {
    int n;
    char ch;
    
    scanf("%d", &n); 
    getchar();
    int a= 0, b=0;
    int x=0, y=0;
    
    for (int i=0; i<n;i++) {
        scanf("%c", &ch); 
        
        if (ch >='a'&& ch<='z') {
            a++;
            x=0; 
            if (a > b)
                b = a;
        }
        else if (ch >='0'&&ch<='9') {
            y++;
            a=0; 
            if (x>y)
                y=x;
        }
        else {
            a=0;
            x=0;
        }
    }
    
    printf("%d\n%d\n",b,y);
    
    return 0;
}
