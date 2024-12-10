/* 	
	Name: weight_of_box.c
	Purpose: Compute Dimensional weight of a box
	Author: R Maahs 
*/

#include <stdio.h>

#define INCHES_PER_POUND 166

// Calculate the dimensional weight of a box that is 12" x 10" x 8"
// weight = volume / 166
// They want use to round up, so we add 165 to volume to allow us to round up
// weight = (volume + 165) / 166

int main(void) 
{
    int length, height, width, volume, weight;

    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the height of the box: ");
    scanf("%d", &height);
    printf("Enter the width of the box: ");
    scanf("%d", &width);

    volume = length * height * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Dimensions: %dx%dx%d\n", length, height, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional Weight (pounds): %d\n", weight);
}