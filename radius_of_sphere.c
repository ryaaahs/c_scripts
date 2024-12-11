#include <stdio.h>

#define PI 3.141592653589793238462643383279502884197

int main(void)
{
    float radius;

    printf("Enter the value of radius (float): "); 

    if (scanf("%f", &radius) == 1) 
    {
        printf("Volume of Sphere: %.1f\n", (4.0f / 3.0f * PI * (radius * radius * radius)));
    }
    else
    {
            printf("Failed to assign value to radius.");
    }

    return 0;
}