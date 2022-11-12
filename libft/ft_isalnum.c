#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c)) || (ft_isdigit(c)))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	x;

	x = '5';
	ft_isalnum(x);
	printf("%d\n", ft_isalnum(x));
}
*/
