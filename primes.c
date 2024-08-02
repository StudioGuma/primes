/*
primes: calculates and prints the prime factorization of a natural number
Copyright (C) 2024 StudioGuma

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <https://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

#define UINT_TYPE uint64_t // uint32_t
#define UINT_PRINT PRIu64 // PRIu32

UINT_TYPE uatoll(const char *S)
{
	UINT_TYPE dst = 0;
	for (uint8_t i = 0; i < strlen(S); i++) {
		dst *= 0xa;
		dst += S[i] - 0x30; // '0' is ASCII character 48
	}
	return dst;
}

int main(int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "Usage: primes <n>\n");
		exit(EXIT_FAILURE);
	}
	UINT_TYPE n = uatoll(argv[1]);
	const UINT_TYPE INIT = n; // Store the input value, to know when to put multiplication signs

	if (n < 2) {
		fprintf(stderr, "Error: number must be at least 2\n");
		exit(EXIT_FAILURE);
	} else {
		printf("%" UINT_PRINT " = ", n);

		while (!(n & 1)) { // While n is divisible by 2
			if (n != INIT)
				printf(" * ");
			putchar('2');
			n >>= 1; // n = n/2
		}
		while (n % 3 == 0) {
			if (n != INIT)
				printf(" * ");
			putchar('3');
			n /= 3;
		}
		while (n % 5 == 0) {
			if (n != INIT)
				printf(" * ");
			putchar('5');
			n /= 5;
		}
		UINT_TYPE val = 7;
		while (val*val <= n) {
			while (n % val == 0) {
				if (n != INIT)
					printf(" * ");
				printf("%" UINT_PRINT, val);
				n /= val;
			}
			if (val % 0xa == 3)
				val += 4;
			else
				val += 2; // Skip multiples of 2 and 5
		}
		if (n != 1) {
			if (n != INIT)
				printf(" * ");
			printf("%" UINT_PRINT, n);
		}
	}

	putchar('\n');
	exit(EXIT_SUCCESS);
}
