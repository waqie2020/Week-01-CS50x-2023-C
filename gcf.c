#include <stdio.h>
#include <cs50.h>

int findGCF(int x, int y);

int main(void)
{
    long a = get_int("What do you want to be the first number? ");
    long b = get_int("What do you want to be the second number? ");

    long gcf_result = findGCF(a, b);

    printf("The Greatest Common Factor (GCF) of %li and %d is %li\n", a, b, gcf_result);
}


























int findGCF(long x, long y)
{
    while (y != 0)
    {
        long q = y;
        y = x % y;
        x = q;
    }

    return x;
}
