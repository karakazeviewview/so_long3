#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
/*
int	main(void)
{
	char	x[];

	x[] = "eiki";
	ft_strlen(x);
	printf("%zu\n", ft_strlen(NULL));
}
*/
