#include <stdio.h>
#include "cs50.h"

int main (void)
{
    char answer = get_char("Do you agree? ");
    
    if(answer == 'Y' || answer == 'y')
    {
        printf("Agreed.\n");
    }
    else if(answer == 'N' || answer == 'n')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }
    {

    }
}