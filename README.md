# primes

Command line program written in C that calculates and prints the full prime factorization of a natural number (at least 2) using trial division.

Example outputs:

* `3 = 3`
* `69 = 3 * 23`
* `256 = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2`
* `727 = 727`
* `4294967295 = 3 * 5 * 17 * 257 * 65537`
* `614889782588491410 = 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31 * 37 * 41 * 43 * 47`

The input is an unsigned 64-bit integer, so it works with any integer from 2 to 18446744073709551615 (2^64 - 1), inclusive.

Building requires a compiler, preferably GCC, and Make. Make sure to edit the makefile according to your compiler and OS. To build, open a command line and type `make`. You can then execute by typing `./primes <n>` (on Unix-like systems) or `primes <n>` (on Windows), where `<n>` is the integer input, and clean by typing `make clean`.

Built for 64-bit systems by default, but you can edit the macros to change it to 32-bit.

Linux executable size: 16.2 kB
