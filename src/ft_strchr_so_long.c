#include "so_long.h"

int	ft_strchr_so_long(const char *str, int c)
{
	size_t	i;
	int		count;
	char	cast_c;

	i = 0;
	count = 0;
	cast_c = (char)c;
	if (cast_c == '\0')
	{
		while (str[i] != '\0')
			i++;
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] == cast_c)
			count++;
		i++;
	}
	return (count);
}
