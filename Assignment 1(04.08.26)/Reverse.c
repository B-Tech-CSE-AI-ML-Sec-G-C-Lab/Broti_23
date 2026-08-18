#include <stdio.h>

int reverse(int n)
{
    int rev = 0, rem;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int num, rev;

    printf("Enter a number: ");
    scanf("%d", &num);

    rev = reverse(num);

    printf("Reverse = %d\n", rev);

    if(rev == num)
        printf("%d is a Palindrome number.", num);
    else
        printf("%d is not a Palindrome number.", num);

    return 0;
}