#include <stdio.h>

int main(int argc, char ** argv) {
    int x;
    scanf("%d", &x);
    if (x < 1){
        printf("\n");
        return 0;
    }
    for (int i=1; i <= x-1; i++){
        int divideThing;
        divideThing = x/i;
        if (i*divideThing == x) {
            printf("%d ", i);
        }
    }
    printf("%d\n", x);
    return 0;
}