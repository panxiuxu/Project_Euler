#include <stdio.h>

#define max_n 4000000

int main() {
    int a = 1, b = 2;
    int sum = 2;
    while (a + b < max_n) {
        b = a + b;
        a = b - a;
        if (!(b & 1)) {
            sum += b;
        }
    }
    printf("%d\n", sum);
    return 0;
}
