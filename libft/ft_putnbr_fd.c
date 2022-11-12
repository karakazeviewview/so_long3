#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	char	m;
	int		i;
	long	num;

	m = '-';
	num = n;
	i = 1;
	if (n < 0)
	{
		num *= -1;
		write(fd, &m, 1);
	}
	while (n / 10 != 0)
	{
		n /= 10;
		i *= 10;
	}
	while (i > 0)
	{
		c = '0' + (num / i);
		write(fd, &c, 1);
		num -= (num / i) * i;
		i /= 10;
	}
}
