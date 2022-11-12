#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	x;

	x = 0;
	ft_isascii(x);
	printf("%d\n", ft_isascii(x));
}
*/
