#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);

    for ( int i = 0; i < n; i++)
    {
        // Print hashes
    for (int hash = 0; hash <= i; hash++)
    {
        printf("#");
    }
        printf("\n");

        // Print spaces
    for (int space = n-1; space > i; space--)
    {
        printf(" ");
    }
    }
}
