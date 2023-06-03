#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main (void)
{
    string strings[] = {"rae", "wick", "kel", "js", "a", "b", "c"};

    string s = get_string("String: ");
    
    for (int i = 0; i < 7; i++)
    {
        if(strcmp(strings[i], s) == 0)
        {
            printf("Found, number is %s\n", s);
            return 0;
        }
    }
    printf("Not Found");
}