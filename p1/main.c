
#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c = 0;

    scanf("%d", &a);

    do {
        scanf("%d", &b);
        c++;

        if (b>a) {
            printf("%d>?\n",b);
        }
        else if (b<a) {
            printf("%d<?\n",b);
        }
        else {
            printf("%d==?\n",b);
        }

    } while (b!=a);

    printf("%d\n", c);

    return 0;
}
