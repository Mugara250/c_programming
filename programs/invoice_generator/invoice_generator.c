#include <stdio.h>
#include <string.h>

/*
1. Declare variables item_name, price, quantity, total_price
2. Accept user inputs
3. Calculate the total price based on user inputs i.e quantity and price
4. Display the invoice info
*/

int main() {
    char item_name[50];
    int price;
    int quantity;
    int total_price;

    printf("Invoice Generation System.\n");

    printf("\nProduct Name: ");
    fgets(item_name, sizeof(item_name), stdin);
    item_name[strcspn(item_name, "\n")] = 0;
    printf("Unit Price: ");
    scanf("%d", &price);

    printf("Quantity: ");
    scanf("%d", &quantity);

    printf("\nInvoice details.\n");
    printf("Product Name: %s\n", item_name);
    printf("Unit Price: %d\n", price);
    printf("Quantity: %d\n", quantity);
    printf("Total Price: %d\n", price * quantity);

    printf("\nThank you for using our invoice generating system\n");

    return 0;
}