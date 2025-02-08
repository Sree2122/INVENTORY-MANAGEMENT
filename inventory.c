#include "item.h"

Item inventory[MAX_ITEMS];
int num_items = 0;

// ... (Functions for add_item, list_items, update_item, search_item, remove_item, save_inventory, load_inventory - similar logic to task_manager.c, but adapted for inventory items)
// ... (Implement these functions - see below for some example implementations)

// Example Implementation of add_item
void add_item(const char *name, int quantity, float price) {
    if (num_items < MAX_ITEMS) {
        strncpy(inventory[num_items].name, name, MAX_ITEM_NAME_LENGTH - 1);
        inventory[num_items].quantity = quantity;
        inventory[num_items].price = price;
        num_items++;
        printf("Item added successfully.\n");
    } else {
        printf("Inventory is full.\n");
    }
}

// Example Implementation of list_items
void list_items() {
    if (num_items == 0) {
        printf("Inventory is empty.\n");
        return;
    }
    printf("\nInventory:\n");
    for (int i = 0; i < num_items; i++) {
        printf("%d. %s - Quantity: %d, Price: %.2f\n", i + 1, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
    printf("\n");
}

// ... (Implement other functions similarly)