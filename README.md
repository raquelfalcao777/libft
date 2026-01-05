*This project has been created as part of the 42 curriculum by rfalcao.*

# Libft

## Description

Libft is a custom C library that reimplements a selection of standard C library functions as well as additional utility functions.  
The goal of this project is to reinforce understanding of fundamental C programming concepts such as memory management, pointers, strings, and linked lists.  

The library includes:
- **Character checks and conversions**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
- **Memory management**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memcmp`, `ft_calloc`.
- **String operations**: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`.
- **File descriptor output**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- **Conversion**: `ft_atoi`, `ft_itoa`.
- **Linked list operations**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

The linked list functions allow the creation and manipulation of singly linked lists.  

---

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

## Resources

### Tester File

The functions were tested with the Tester file available in:

https://github.com/Tripouille/libftTester

## Learning the theory


Singly-Linked Lists - CS50 Shorts

The CS50 videos greatly helped me in understanding the theory behind linked lists:
 
https://www.youtube.com/watch?v=zQI3FyWm144&pp=ygURY3M1MCBsaW5rZWQgbGlzdHPSBwkJTQoBhyohjO8%3D