//calculate profit and loss 

#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    // Input Cost Price and Selling Price
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    // Calculate Profit or Loss
    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        printf("Profit = %.2f\n", profit);
    } else if (sellingPrice < costPrice) {
        float loss = costPrice - sellingPrice;
        printf("Loss = %.2f\n", loss);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}