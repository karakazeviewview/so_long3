#include "libft.h"

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	char	x;

	x = '8';
	ft_isalpha(x);
	printf("%d\n", ft_isalpha(x));
	printf("%d", isalpha(x));
}
*/
