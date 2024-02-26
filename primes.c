#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

uint64_t uatoll(const char *S)
{
	uint64_t dst = 0;
	for (uint8_t i = 0; i < strlen(S); i++) {
		dst *= 10;
		dst += S[i] - 48; // '0' is ASCII character 48
	}
	return dst;
}

int main(int argc, char **argv)
{
	if (argc != 2) {
		fprintf(stderr, "Usage: primes <n>\n");
		exit(EXIT_FAILURE);
	}
	uint64_t n = uatoll(argv[1]);
	const uint64_t INIT = n; // Store the input value, to know when to put multiplication signs

	if (n < 2) {
		fprintf(stderr, "Error: Number must be at least 2\n");
		exit(EXIT_FAILURE);
	} else {
		printf("%" PRIu64 " = ", n);

		while (!(n & 1)) { // While n is divisible by 2
			if (n != INIT)
				printf(" * ");
			printf("2");
			n >>= 1; // n = n/2
		}
		while (n % 3 == 0) {
			if (n != INIT)
				printf(" * ");
			printf("3");
			n /= 3;
		}
		while (n % 5 == 0) {
			if (n != INIT)
				printf(" * ");
			printf("5");
			n /= 5;
		}
		uint64_t val = 7;
		while (val*val <= n) {
			while (n % val == 0) {
				if (n != INIT)
					printf(" * ");
				printf("%" PRIu64, val);
				n /= val;
			}
			if (val % 10 == 3)
				val += 4;
			else
				val += 2; // Skip multiples of 2 and 5
		}
		if (n != 1) {
			if (n != INIT)
				printf(" * ");
			printf("%" PRIu64, n);
		}
	}

	printf("\n");
	exit(EXIT_SUCCESS);
}
