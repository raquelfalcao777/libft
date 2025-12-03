// insert header

#include "libft.h"

char	*ft_itoa(int n)
{
	int	is_negative;
	char	*string;
	int	z;
	int	i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negative = n < 0;
	if (is_negative) n = -n;
	z = n;
	if (n == 0)
	{
		string = malloc(2);
		if (!string)
			return (0);
		string[0] = '0';
		string[1] = '\0';
		return (string);
	}
	
	while (z > 0)
	{
		i++;
		z /= 10;
	}
	string = malloc((i + 1 + is_negative) * sizeof(char));
	if (!string)
		return (0);
	string[i + is_negative] = '\0';
	while (i > 0)
	{
		string[--i + is_negative] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		string[0] = '-';
	return (string);
}
