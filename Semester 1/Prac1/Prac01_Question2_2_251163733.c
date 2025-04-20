#include <stdio.h>

int main() {
    int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

    printf("Days in Q1: %d\n", days[0] + days[1] + days[2]);
    printf("Days in Q2: %d\n", days[3] + days[4] + days[5]);
    printf("Days in Q3: %d\n", days[6] + days[7] + days[8]);
    printf("Days in Q4: %d\n", days[9] + days[10] + days[11]);

    return 0;
}