#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *res;

    // 0
    res = ft_itoa(0);
    printf("0 -> %s\n", res);
    free(res);

    // Positive number
    res = ft_itoa(1980);
    printf("1980 -> %s\n", res);
    free(res);

    // Negative number
    res = ft_itoa(-12345);
    printf("-12345 -> %s\n", res);
    free(res);

    // INT_MAX
    res = ft_itoa(INT_MAX);
    printf("INT_MAX (%d) -> %s\n", INT_MAX, res);
    free(res);

    // INT_MIN
    res = ft_itoa(INT_MIN);
    printf("INT_MIN (%d) -> %s\n", INT_MIN, res);
    free(res);

    // Single digit positive
    res = ft_itoa(7);
    printf("7 -> %s\n", res);
    free(res);

    // Single digit negative
    res = ft_itoa(-9);
    printf("-9 -> %s\n", res);
    free(res);

    return 0;
}