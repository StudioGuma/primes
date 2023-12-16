#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: primes <n>\n");
        return 1;
    }
    uint64_t n = atoll(argv[1]);
    uint64_t init = n; // Store the input value, to know when to put multiplication signs

    if (n < 2) {
        fprintf(stderr, "Number must be at least 2\n");
        return 1;
    }
    else {
        printf("%" PRIu64 " = ", n);

        while (n % 2 == 0) {
            if (n != init) printf(" * ");
            printf("2");
            n >>= 1; // n = n/2
        }
        while (n % 3 == 0) {
            if (n != init) printf(" * ");
            printf("3");
            n /= 3;
        }
        while (n % 5 == 0) {
            if (n != init) printf(" * ");
            printf("5");
            n /= 5;
        }
        uint64_t val = 7;
        while (val*val <= n) {
            while (n % val == 0) {
                if (n != init) printf(" * ");
                printf("%" PRIu64, val);
                n /= val;
            }
            if (val % 10 == 3) val += 4;
            else val += 2; // Skip multiples of 2 & 5
        }
        if (n != 1) {
            if (n != init) printf(" * ");
            printf("%" PRIu64, n);
        }
    }
    
    printf("\n");
    return 0;
}
