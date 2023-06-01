#include <stdio.h>

int main() {
    int height;

    // Prompt the user for the pyramid's height
    do {
        printf("Enter the height of the pyramid (1-8): ");
        scanf("%d", &height);
    } while (height < 1 || height > 8);

    // Create the pyramid
    for (int i = 1; i <= height; i++) {
        printf("%*s", height - i, "");    // Print leading spaces
        printf("%.*s", i, "########");    // Print left hashes
        printf("  ");                     // Print gap
        printf("%.*s", i, "########");    // Print right hashes
        printf("\n");
    }
    return 0;
}