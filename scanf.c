#include <stdio.h>

int main(void)
{
    // Scanf reads input according to a particular format

    int i, j;
    // float x, y;

    // professionals avoid using scanf

    // printf("Enter values: ");
    // scanf("%d%d%f%f", &i, &j, &x, &y);

    printf("Enter values: ");
    // scanf("%db%d", &i, &j);

    scanf("%d, %d", &i, &j);

    // printf("i: %d, j: %d, x: %f, y: %f", i, j, x, y);
    printf("i: %d, j: %d", i, j);

    return 0;
}