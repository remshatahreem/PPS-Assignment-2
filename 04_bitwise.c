#include <stdio.h>

int main(void) {
    int n, k;
    int max_and = 0, max_or = 0, max_xor = 0;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int and_value = i & j;
            int or_value = i | j;
            int xor_value = i ^ j;

            if (and_value < k && and_value > max_and)
                max_and = and_value;
            if (or_value < k && or_value > max_or)
                max_or = or_value;
            if (xor_value < k && xor_value > max_xor)
                max_xor = xor_value;
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
    return 0;
}
