// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// static void print_result(char *result)
// {
//     if (result == NULL)
//         printf("NULL\n");
//     else
//         printf("\"%s\"\n", result);
// }

// int main(void)
// {
//     char *res;

//     printf("---- Basic tests ----\n");
//     res = ft_strjoin("Hello", "World");
//     print_result(res);
//     free(res);

//     res = ft_strjoin("", "World");
//     print_result(res);
//     free(res);

//     res = ft_strjoin("Hello", "");
//     print_result(res);
//     free(res);

//     res = ft_strjoin("", "");
//     print_result(res);
//     free(res);

//     printf("\n---- Longer strings ----\n");
//     res = ft_strjoin("42 ", "Program");
//     print_result(res);
//     free(res);

//     printf("\n---- Special characters ----\n");
//     res = ft_strjoin("Hello\n", "World\n");
//     print_result(res);
//     free(res);

//     printf("\n---- NULL inputs (should return NULL) ----\n");
//     res = ft_strjoin(NULL, "World");
//     print_result(res);

//     res = ft_strjoin("Hello", NULL);
//     print_result(res);

//     return 0;
// }