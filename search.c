#include <stdio.h>
#include <cs50.h>


int main (void)
{
    int numbers[] = {100, 20, 10, 50, 70, 99, 88};

    int n = get_int("Enter number: ");
    for (int i = 0; i < 7; i++)
    {
        if(numbers[i] == n)
        {
            printf("Found, number is %i\n" + n);
        }
    }
    printf("Not Found");
}