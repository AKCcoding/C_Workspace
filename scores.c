#include <cs50.h>
#include <stdio.h>

const int n = 3;
float average(int length, int scores[]);

int main(void)
{
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Input scores: ");
    }
    printf("Average: %f\n", average(n, scores));
}

float average(int length, int scores[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += scores[i];
    }
    return sum / (float) length;
}