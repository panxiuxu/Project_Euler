#include <stdio.h>

#define N 600851475143LL

int main() {
    long long i = 2, ans = 0, num = N;
    while (i * i <= num) {
        if (num % i == 0) {
            ans = i;
        }
        while (num % i == 0) {
            num /= i;
        }
        i += 1;
    }
    if (num != 1) {
        ans = num;
    }
    printf("%lld\n", ans);
    return 0;
}
