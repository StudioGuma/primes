Command line program written in C that calculates & prints the full prime factorization of a natural number (at least 2) using trial division.

Example outputs:
* `3 = 3`
* `69 = 3 * 23`
* `256 = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2`
* `727 = 727`
* `4294967295 = 3 * 5 * 17 * 257 * 65537`
* `614889782588491410 = 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31 * 37 * 41 * 43 * 47`

The input is an unsigned 64-bit integer, so it works with any integer from 2 to 18446744073709551615 (2^64 - 1), inclusive. Any number above 18446744073709551615 will become 18446744073709551615.

Building requires installing a compiler, preferably GCC, and Make on Windows. To build, open a command line & type `make`. You can then execute by typing `primes <n>` (on Windows) or `./primes <n>` (on Unix-like systems), where `<n>` is the integer input, and clean by typing `make clean` after editing the makefile based on your OS.

Executable size: 246 KB
