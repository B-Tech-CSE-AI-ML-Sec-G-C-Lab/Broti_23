#include <stdio.h>

int prime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int a, b, i;

    printf("Enter range: ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers are:\n");

    for (i = a; i <= b; i++)
    {
        if (prime(i))
            printf("%d ", i);
    }

    return 0;
}