#include <stdio.h>

#define PI 3.141592653589793238462643383279502884197

int main(void)
{
    float radius = 10.0f;

    printf("Volume of Sphere: %.1f\n", (4.0f / 3.0f * PI * (radius * radius * radius)));
}