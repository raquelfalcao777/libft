#include "libft.h"

// Test functions
char to_upper_even(unsigned int i, char c)
{
    if (i % 2 == 0 && c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

char add_one(unsigned int i, char c)
{
    (void)i;
    return (c + 1);
}

char replace_x(unsigned int i, char c)
{
    (void)i;
    (void)c;
    return 'x';
}

char identity(unsigned int i, char c)
{
    (void)i;
    return c;
}

int main(void)
{
    printf("1. Normal: %s\n", ft_strmapi("abcdef", to_upper_even));

    printf("2. Empty: '%s'\n", ft_strmapi("", identity));

    printf("3. NULL s: %p\n", ft_strmapi(NULL, identity));

    printf("4. NULL f: %p\n", ft_strmapi("test", NULL));

    printf("5. Identity: %s\n", ft_strmapi("hello", identity));

    printf("6. Increment: %s\n", ft_strmapi("abc", add_one));

    printf("7. Replace: %s\n", ft_strmapi("hello", replace_x));

    printf("8. Non-printable: ");
    char *np = ft_strmapi("\n\t\r", add_one);
    for (int i = 0; i < 3; i++)
        printf("%d ", np[i]);
    printf("\n");

    return 0;
}