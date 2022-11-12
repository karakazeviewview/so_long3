#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
	{
		c = c - ('a' - 'A');
	}
	return (c);
}
/*
int	main(void)
{
	int	s;
	int	c;

	s = '5';
	c = '5';
	s = ft_toupper(s);
	c = toupper(c);
	printf("%c\n", s);
	printf("%c", c);
}
*/