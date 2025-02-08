#include "inventory.h"
#include "ui.h"

#define SAVE_FILENAME "inventory.txt" // Filename for saving/loading

int main() {
    load_inventory(SAVE_FILENAME); // Load inventory at start

    int choice;
    char name[MAX_ITEM_NAME_LENGTH];
    int quantity;
    float price;


    do {
        display_menu();
        scanf("%d", &choice);
        getchar(); // Clear the input buffer

        switch (choice) {
            case 1:
                printf("Enter item name: ");
                fgets(name, MAX_ITEM_NAME_LENGTH, stdin);
                name[strcspn(name, "\n")] = 0; // Remove trailing newline
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                printf("Enter price: ");
                scanf("%f", &price);
                add_item(name, quantity, price);
                break;
            case 2:
                list_items();
                break;
            // ... other cases for update, search, remove, save, load, exit ...
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 8);

    return 0;
}