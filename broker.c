#include <stdio.h>

int main(void) {

    float original_commission, rival_commission, price_per_share, value;
    int shares;

    printf("Enter total number of shares: ");
    scanf("%d", &shares);

    printf("Enter price per share: ");
    scanf("%f", &price_per_share);

    value = shares * price_per_share;

    // Rival
    if (shares > 0 || shares < 2000) {
        rival_commission = 33 + (0.03 * shares);
    } else if (shares > 2000) {
        rival_commission = 33 + (0.02 * shares);
    }

    // Original
    if (value < 2500.00f) {
        original_commission = 30.00f + 0.017f * value;
    } else if (value < 6250.00f) {
        original_commission = 56.00f + 0.066f * value;
    } else if (value < 20000.00f) {
        original_commission = 76.00f + 0.066f * value;
    } else if (value < 50000.00f) {
        original_commission = 100.00f + 0.066f * value;
    } else if (value < 500000.00f) {
        original_commission = 155.00f + 0.066f * value;
    } else {
        original_commission = 255.00f + 0.066f * value;
    }

    if (original_commission < 39.00f) {
        original_commission = 39.00f;
    }

    printf("Original Broker Commission : $%.2f\n", original_commission);
    printf("Original Rival Commission : $%.2f\n", rival_commission);

    return 0;
}