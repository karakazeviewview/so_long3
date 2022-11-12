#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		c = c + ('a' - 'A');
	}
	return (c);
}

/*
int	main(void)
{
	int	s;

	s = 'E';
	s = ft_tolower(s);
	printf("%c", s);
}
*/