#include <stdio.h>

#define tax_value 0.05
#define discount_value 0.10

int main() {
    char item_name[50];
    int quantity;
    float price;

    printf("Enter the name of the item: ");
    scanf("%s", item_name);

    printf("Enter the quantity of the item: ");
    scanf("%d", &quantity);

    printf("Enter the price of the item: ");
    scanf("%f", &price);
    float total_before_tax = quantity * price;
    float tax_amount = total_before_tax * tax_value;
    float discounted_price = total_before_tax - (total_before_tax * discount_value);
    float total_price = discounted_price + tax_amount;
    printf("Item: %s\n", item_name);
    printf("Quantity: %d\n", quantity);
    printf("Price per unit: %.2f\n", price);
    printf("Total before tax: %.2f\n", total_before_tax);
    printf("Tax amount: %.2f\n", tax_amount);
    printf("Discounted price: %.2f\n", discounted_price);
    printf("Total price (including tax): %.2f\n", total_price);


    return 0;
}
