#include <cs50.h>
#include <stdio.h>

int collatz(int n, int steps);

int main(void)
{
    int n = get_int("Interger: ");
    int steps = collatz(n, 0);
    printf("Steps taken: %i\n", steps);
}

int collatz(int n, int steps)
{
    if (n == 1)
    {
        return steps;
    }
    else if ((float) n / 2 > n / 2)
    {
        return collatz((3 * n) + 1, steps + 1);
    }
    else
    {
        return collatz(n / 2, steps + 1);
    }
}
