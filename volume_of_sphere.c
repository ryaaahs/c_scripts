#include <stdio.h>
#define M_PI 3.14159265358979323846

int main(void)
{
    float radius;
    float volume;

    printf("Input radius: "); 
    scanf("%f", &radius); 

    volume = 4.0f/3.0f*M_PI*(10*10*10); 

    printf("Volume of sphere: %f\n", volume);
    return 0;
}