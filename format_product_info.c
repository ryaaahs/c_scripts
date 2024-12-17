#include <stdio.h>

int main(void)
{
    int item_num, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    
    while(unit_price <= 0 || unit_price >= 10000)
    {
        printf("Unit price cannot be less than 0 or greater than 9999.99\n");
        printf("Enter unit price: ");
        scanf("%f", &unit_price);
    }

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year); 

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-4d\t\t$  %4.2f\t%02d/%02d/%d\n", item_num, unit_price, month, day, year);

    return 0;
}