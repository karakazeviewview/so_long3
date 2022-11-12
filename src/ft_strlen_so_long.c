#include "so_long.h"

size_t	ft_strlen_so_long(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0' && str[len] != '\n')
		len++;
	return (len);
}
