#include <stdio.h>

int main(void) 
{

    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year); 
    printf("You entered the date %02d%02d%d\n", year, month, day);

    return 0;
}