#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	cast_c;

	i = 0;
	cast_c = (char)c;
	if (cast_c == '\0')
	{
		while (str[i] != '\0')
			i++;
		return ((char *)&str[i]);
	}
	while (str[i] != '\0')
	{
		if (str[i] == cast_c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	src1[];
	int		c1;
	char	src2[];
	int		c2;

	src1[] = "42tokyo";
	c1 = 't';
	src2[] = "42tokyo";
	c2 = 't';
	printf("%s\n", ft_strchr(src1, c1));
	printf("%s", strchr(src2, c2));
}
*/
