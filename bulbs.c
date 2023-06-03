#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    char message[100];
    printf("Enter your message: ");
    fgets(message, sizeof(message), stdin);

    // Removing the newline character from the input
    message[strcspn(message, "\n")] = '\0';

    int length = strlen(message);

    for (int i = 0; i < length; i++)
    {
        char currentChar = message[i];

        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            int bit = (currentChar >> j) & 1;
            print_bulb(bit);
        }

        printf("\n");
    }

    return 0;
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}