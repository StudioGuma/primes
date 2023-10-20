Command line program written in C that calculates & prints the full prime factorization of a natural number (at least 2) using trial division.

Example outputs:
`3 = 3`
`69 = 3 * 23`
`256 = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2`
`727 = 727`
`4294967295 = 3 * 5 * 17 * 257 * 65537`
`614889782588491410 = 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31 * 37 * 41 * 43 * 47`

The input is an unsigned long long value, so it works with any integer from 2 to 18446744073709551615 (2^64 - 1), inclusive. Any number above 18446744073709551615 will become 18446744073709551615.

Building requires installing the GCC compiler and, on Windows, Make. To build, open a command line & type `make`. You can then execute by typing `primes` (on Windows) or `./primes` (on Unix-like systems), and clean by typing `make clean`.  
**NOTE:** If you’re not using Windows, you need to change the `OS` value in the makefile out of `windows`, or cleaning won’t work.

File size: 393 KB
