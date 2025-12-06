// 42 header
#include "libft.h"

//outputs the int 'n' to the specified file descriptor

static void	put_long_fd(long n, int fd)
{
	char	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		put_long_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long nl;
	nl = (long)n;
	put_long_fd(n, fd);
}

int main()
{
	ft_putnbr_fd(0, 1); //0
	printf("\n");          
	ft_putnbr_fd(42, 1);          // 42
	printf("\n"); 
	ft_putnbr_fd(-42, 1);         // -42
	printf("\n"); 
	ft_putnbr_fd(2147483647, 1);  // INT_MAX
	printf("\n"); 	
	ft_putnbr_fd(-2147483648, 1); // INT_MIN
	printf("\n");
	return 0;
}
