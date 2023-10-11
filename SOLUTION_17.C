#include <stdio.h>

int main() {
    int i;

                                                           // Using a while loop to print numbers from 1 to 100 (increasing order)
    printf("Using while loop - Increasing Order:\n");
    i = 1;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

                                                              // Using a do-while loop to print numbers from 1 to 100 (increasing order)
    printf("Using do-while loop - Increasing Order:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");

                                                                  // Using a for loop to print numbers from 1 to 100 (increasing order)
    printf("Using for loop - Increasing Order:\n");
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");

                                                                     // Using a while loop to print numbers from 100 to 1 (decreasing order)
    printf("Using while loop - Decreasing Order:\n");
    i = 100;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

                                                                   // Using a do-while loop to print numbers from 100 to 1 (decreasing order)
    printf("Using do-while loop - Decreasing Order:\n");
    i = 100;
    do {
        printf("%d ", i);
        i--;
    } while (i >= 1);
    printf("\n");

                                                                   // Using a for loop to print numbers from 100 to 1 (decreasing order)
    printf("Using for loop - Decreasing Order:\n");
    for (i = 100; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
