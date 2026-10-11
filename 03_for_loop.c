#include <stdio.h>

int main(void) {
    int a, b;
    const char *words[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            printf("%s\n", words[i]);
        } else if (i > 9) {
            printf("%s\n", (i % 2 == 0) ? "even" : "odd");
        }
    }

    return 0;
}
