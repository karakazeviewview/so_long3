#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	ans;
	size_t		i;
	int			m;

	ans = 0;
	i = 0;
	m = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m = -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		ans = ans * 10 + str[i] - 48;
		i++;
	}
	return (ans * m);
}
/*
int	main(void)
{
	printf("%d,", ft_atoi("-123123"));
	printf("%d\n", ft_atoi("99999999999999999999999999"));
	printf("%d,", atoi("-123123"));
	printf("%d", atoi("99999999999999999999999999"));
}
*/