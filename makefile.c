inventory_manager: main.c inventory.c ui.c
        gcc -o inventory_manager main.c inventory.c ui.c

clean:
        rm -f inventory_manager