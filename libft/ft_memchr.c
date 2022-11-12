#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t s)
{
	size_t			i;
	unsigned char	*str_cast;
	unsigned char	cast_c;

	i = 0;
	cast_c = (unsigned char)c;
	str_cast = (unsigned char *)str;
	while (i < s)
	{
		if (str_cast[i] == cast_c)
			return (&str_cast[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	src[];
	int		c;
	int		s;
	char	src2[];
	int		c2;
	int		s2;

	src[] = "42 tokyo";
	c = 't';
	s = 0;
	src2[] = "42 tokyo";
	c2 = 't';
	s2 = 0;
	printf("%s\n", (char *)ft_memchr(src, c, s));
	printf("%s", (char *)memchr(src2, c2, s2));
}
*/