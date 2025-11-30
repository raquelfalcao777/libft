// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// static void print_result(char *result)
// {
//     if (!result)
//         printf("NULL\n");
//     else
//         printf("\"%s\"\n", result);
// }

// int main(void)
// {
//     char *res;

//     printf("---- Basic trimming ----\n");
//     res = ft_strtrim("  Hello  ", " ");
//     print_result(res);
//     free(res);

//     res = ft_strtrim("abcde", "be");
//     print_result(res);  // expected: "abcd"
//     free(res);

//     res = ft_strtrim("bbbabc", "b");
//     print_result(res);  // expected: "abc"
//     free(res);

//     res = ft_strtrim("123abc321", "123");
//     print_result(res);  // expected: "abc"
//     free(res);

//     printf("\n---- Empty strings ----\n");
//     res = ft_strtrim("", "abc");
//     print_result(res);  // expected: ""
//     free(res);

//     res = ft_strtrim("abcd", "");
//     print_result(res);  // expected: "abcd"
//     free(res);

//     printf("\n---- Entire string trimmed ----\n");
//     res = ft_strtrim("aaaaa", "a");
//     print_result(res);  // expected: ""
//     free(res);

//     printf("\n---- NULL inputs ----\n");
//     res = ft_strtrim(NULL, "abc");
//     print_result(res);  // expected: NULL

//     res = ft_strtrim("Hello", NULL);
//     print_result(res);  // expected: "Hello"
//     free(res);

//     return 0;
// }