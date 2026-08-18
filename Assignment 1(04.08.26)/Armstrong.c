#include <stdio.h>

int armstrong(int n)
{
    int temp, rem, sum = 0;
    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}