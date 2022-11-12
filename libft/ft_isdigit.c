#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	x;

	x = '8';
	ft_isdigit(x);
	printf("%d\n", ft_isdigit(x));
	printf("%d", isdigit(x));
}
*/
