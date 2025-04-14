#include <stdio.h>

int main(void) {

    float knots;

    printf("Enter estimated wind force: ");
    scanf("%f", &knots);

    if (knots > 0 && knots < 1) {
        printf("Wind force is Calm\n");
    } else if (knots >= 1 && knots <= 3) {
        printf("Wind force is Light air\n");
    } else if (knots >= 4 && knots <= 27) {
        printf("Wind force is Breeze\n");
    } else if (knots >= 28 && knots <= 47) {
        printf("Wind force is Gale\n");
    } else if (knots > 48 && knots <= 63) {
        printf("Wind force is Storm\n");
    } else if (knots > 63) {
        printf("Wind force is Hurricane\n");
    } else {
        printf("No proper description for wind force\n");
    }

    return 0;
}