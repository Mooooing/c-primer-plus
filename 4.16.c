#include<stdio.h>

int main(void)
{
    unsigned width,precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is :%*d:\n", width, number);
    printf("Now enter a width and a precision:\n");
    scanf("%d,%d", &width, &precision);
    printf("width = %d, precision=%d\n", width, precision);

    printf("weight = %*.*f\n", width, precision, weight);
    printf("weight = %8.3f\n", weight);

    printf("Done!\n");
    return 0;
}