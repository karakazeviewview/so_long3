#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen_printf(str);
	write(1, str, len);
	return (len);
}

int	ft_put_ptr(uintptr_t num)
{
	int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_put_ptr(num / 16);
	}
	len += write(1, &"0123456789abcdef"[num % 16], 1);
	return (len);
}

int	ft_putnbr(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa_printf(nbr);
	len = ft_putstr(str);
	free(str);
	return (len);
}
