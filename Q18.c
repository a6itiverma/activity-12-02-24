#include <stdio.h>

int main()
{
    float cost_price, selling_price, profit;


    printf("Enter the cost price and selling price: ");
    scanf("%f %f", &cost_price, &selling_price);

    profit = selling_price - cost_price;


    if (profit > 0)
        {
        printf("You can book your profit amount: %.2f\n", profit);
        }
    else if (profit < 0)
        {
        printf("You incurred a loss of: %.2f\n", -profit);
        }
    else
        {
        printf("You broke even. No profit or loss.\n");
        }

    return 0;
}
