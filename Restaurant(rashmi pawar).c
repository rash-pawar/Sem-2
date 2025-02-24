#include <stdio.h>

int main() {
    int choice, quantity;
    float total = 0.0, price;

    printf("1. Hakka Noodles - $5.99\n2. Schezwan Fried rice - $8.99\n3. Pasta - $7.49\n4. pizza - $4.99\n5. Burger - $1.49\n6. Exit\n");

    while (1) {
        printf("Choose an item (1-6): ");
        scanf("%d", &choice);

        if (choice == 6) break;

        switch (choice) {
            case 1: price = 5.99; break;
            case 2: price = 8.99; break;
            case 3: price = 7.49; break;
            case 4: price = 4.99; break;
            case 5: price = 1.49; break;
            default: printf("Invalid choice!\n"); continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);
        total += price * quantity;
        printf("Added to your bill.\n");
    }

    printf("Total bill: $%.2f\n", total);
    return 0;
}
