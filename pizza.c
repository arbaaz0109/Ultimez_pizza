#include <stdio.h>

int main() {
    // Define the quantities of each type of pizza
    int largePizza = 8;
    int mediumPizza = 6;
    int regularPizza = 4;
    int smallPizza = 1;

    // pizza quantities
    int lcm = largePizza;
    while (1) {
        if (lcm % mediumPizza == 0 && lcm % regularPizza == 0 && lcm % smallPizza == 0) {
            break;
        }
        lcm += largePizza;
    }

    // Print the result
    printf("The number of people needed at the party: %d\n", lcm);

    return 0;
}
