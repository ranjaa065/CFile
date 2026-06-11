#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter Celsius value: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("The Fahrenheit value = %f", f);

    return 0;
}