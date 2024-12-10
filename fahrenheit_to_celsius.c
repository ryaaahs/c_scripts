// Converts Fahrenheit temperature to Celsius

#include <stdio.h>

#define FREEZING_PT 32.0f // Using ints will truncate our values, so we need to set each value to f
#define SCALE_FACTOR (5.0f / 9.0f) 

int main(void) {
    float fahrenheit, celsius;

    printf("Enter Farhrenheit temperature: "); 
    scanf("%f", &fahrenheit); 

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}