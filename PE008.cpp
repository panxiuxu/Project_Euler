#include <inttypes.h>
#include <stdio.h>
#include "PE008.h"

int main() {
    int64_t p = 1, zero = 0, ans = 0;
    for (int i = 0; num[i]; i++) {
        if (num[i] == '0') {
            zero += 1;
        } else {
            p *= (num[i] - '0');
        }
        if (i >= 13) {
            if (num[i - 13] == '0') {
                zero -= 1;
            } else {
                p /= (num[i - 13] - '0');
            }
            if (zero == 0 && p > ans) {
                ans = p;
            }
        }
    }
    printf("%"PRId64"\n", ans);
    return 0;
}
