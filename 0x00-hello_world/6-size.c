#include <stdio.h>

int main() {
    printf("Size of char: %zu byte(s)
", sizeof(char));
    printf("Size of short: %zu byte(s)
", sizeof(short));
    printf("Size of int: %zu byte(s)
", sizeof(int));
    printf("Size of long: %zu byte(s)
", sizeof(long));
    printf("Size of float: %zu byte(s)
", sizeof(float));
    printf("Size of double: %zu byte(s)
", sizeof(double));
    printf("Size of long double: %zu byte(s)
", sizeof(long double));

    return 0;
}
