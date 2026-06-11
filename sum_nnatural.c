#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter the Nth Natural number: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("The sum of natural numbers = %d", sum);

    return 0;
}
