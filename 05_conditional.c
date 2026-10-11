#include <stdio.h>

int main(void) {
    int n;
    const char *words[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    scanf("%d", &n);

    if (n >= 1 && n <= 9) {
        printf("%s\n", words[n]);
    } else if (n > 9) {
        printf("%s\n", (n % 2 == 0) ? "even" : "odd");
    } else {
        printf("%s\n", (n % 2 == 0) ? "even" : "odd");
    }

    return 0;
}
