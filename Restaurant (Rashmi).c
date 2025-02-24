#include <stdio.h>

int main() {
    int choice, quantity;
    int total = 0, price;

    printf("1. Hakka Noodles - 180\n2. Schezwan Fried rice - 200\n3. Pasta -100\n4. pizza - 345\n5. Burger - 120\n6. Exit\n");

    while (1) {
        printf("Choose an item (1-6): ");
        scanf("%d", &choice);

        if (choice == 6) break;

        switch (choice) {
            case 1: price = 180; break;
            case 2: price = 200; break;
            case 3: price = 100; break;
            case 4: price = 345; break;
            case 5: price = 120; break;
            default: printf("Invalid choice!\n"); continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);
        total += price * quantity;
        printf("Added to your bill.\n");
    }

    printf("Total bill: %d\n", total);
    return 0;
}
