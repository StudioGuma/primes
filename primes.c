#include <stdio.h>

int main() {
    unsigned long long n;
    char c;

    do {
        printf("\nEnter a number: ");
        scanf("%llu", &n);
        unsigned long long init = n; // Store the input value, to know when to put multiplication signs

        if (n < 2) printf("Number must be at least 2");
        else {
            printf("%llu = ", n);

            while (n % 2 == 0) {
                if (n != init) printf(" * ");
                printf("2");
                n >>= 1; // n = n/2;
            }
            unsigned long long val = 3;
            while (val*val <= n) {
                while (n % val == 0) {
                    if (n != init) printf(" * ");
                    printf("%llu", val);
                    n /= val;
                }
                val += 2; // Skip even numbers
            }
            if (n != 1) {
                if (n != init) printf(" * ");
                printf("%llu", n);
            }
        }

        printf("\nContinue? (y/n) ");
        scanf("%s", &c);
    } while ((c == 'y') || (c == 'Y'));

    return 0;
}
