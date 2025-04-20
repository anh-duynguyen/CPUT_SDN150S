#include <stdio.h>

#define VOLTAGE 230  // Define voltage as a constant

int main() {
    const float current = 8.5;  
    unsigned int power = (unsigned int)(VOLTAGE * current);  

    float time;
    printf("Enter time in hours: ");
    scanf("%f", &time);

    unsigned int energy = (unsigned int)(power * time);

    printf("Power: %u W\n", power);
    printf("Energy: %u Wh\n", energy);

    return 0;
}