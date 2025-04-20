#include <stdio.h>

int main() {
    int daysInCurrentFebruary = 29;
    
    // Define days per month correctly
    int daysInJanuary = 31;
    int daysInFebruary = daysInCurrentFebruary;
    int daysInMarch = 31;
    int daysInApril = 30;
    int daysInMay = 31;
    int daysInJune = 30;
    int daysInJuly = 31;
    int daysInAugust = 31;
    int daysInSeptember = 30;
    int daysInOctober = 31;
    int daysInNovember = 30;
    int daysInDecember = 31;

    // Compute half-year sums
    int daysInFirstHalf = daysInJanuary + daysInFebruary + daysInMarch + 
                          daysInApril + daysInMay + daysInJune;
    int daysInSecondHalf = daysInJuly + daysInAugust + daysInSeptember + 
                           daysInOctober + daysInNovember + daysInDecember;

    // Print results
    printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
    printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
    printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);

    return 0;
}