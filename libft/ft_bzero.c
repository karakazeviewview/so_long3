#include "libft.h"

void	ft_bzero(void *str, size_t s)
{
	ft_memset(str, 0, s);
}
/*
int	main(void)
{
	char	str1[];
	size_t	s1;
	char	ans;
	char	str2[];
	size_t	s2;

	str1[] = "42tokyo";
	s1 = 2;
	ans = ft_bzero(str1, s1);
	str2[] = "42tokyo";
	s2 = 2;
	printf("%s\n", ans));
	printf("%s", bzero(str2, s2));
}
*/
