#include <stdio.h>

int main() {
    unsigned int Value = 0xFFFFFFF2; // hexadecimal representation

    // Corrected print statements
    printf("Decimal: %u\n", Value);
    printf("Octal: %o\n", Value);
    printf("Hexadecimal: %X\n", Value);
    printf("Character: %c\n", Value);

    return 0;
}