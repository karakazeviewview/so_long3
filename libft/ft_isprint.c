#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	x;

	x = 'a';
	ft_isprint(x);
	printf("%d\n", ft_isprint(x));
}
*/
