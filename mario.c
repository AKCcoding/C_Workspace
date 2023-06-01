#include <stdio.h>

// Function to print spaces
void printSpaces(int n) {
    for (int i = 0; i < n; i++) {
        printf(" ");
    }
}

// Function to print hashes
void printHashes(int n) {
    for (int i = 0; i < n; i++) {
        printf("#");
    }
}

// Function to create the Mario pyramid
void createPyramid(int height) {
    for (int i = 1; i <= height; i++) {
        printSpaces(height - i);
        printHashes(i);
        printf("  ");
        printHashes(i);
        printf("\n");
    }
}

int main(void) {
    int height;

    // Prompt the user for the pyramid's height
    do {
        printf("Enter the height of the pyramid (1-8): ");
        scanf("%d", &height);
    } while (height < 1 || height > 8);

    // Create the pyramid
    createPyramid(height);

    return 0;
}