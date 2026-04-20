#include <stdio.h>

int main(void) {
    int N;
    char ch;
    
    scanf("%d", &N); 
    getchar();
    
    int a= 0, b = 0;
    int x = 0, y = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%c", &ch);
        
        if (ch >= 'a' && ch <= 'z') {
            a++;
            x = 0;
            if (a > b)
                b = a;
        }

        else if (ch >= '0' && ch <= '9') {
            x++;
            a = 0;
            if (x > y)
                y = x;
        }
    }
    
    printf("%d\n", b);
    printf("%d\n", y);
    
    return 0;
}
