#include <stdio.h>

#define max_n 2000000

int prime[max_n] = {0};

int main() {
    long long sum = 0;
    for (int i = 2; i < max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            sum += i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i >= max_n) {
                break;
            } else {
                prime[prime[j] * i] = 1;
            }
            if (i % prime[j] == 0) {
                break;
            }
        }
    }
    printf("%lld\n", sum);
    return 0;
}
