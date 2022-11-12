#include "ft_printf.h"

int	ft_formats(va_list *ap, const char *format, int i)
{
	int	ans_len;

	ans_len = 0;
	if (format[i + 1] == 'c')
		ans_len += ft_putchar(va_arg(*ap, int));
	else if (format[i + 1] == 's')
		ans_len += ft_putstr(va_arg(*ap, char *));
	else if (format[i + 1] == 'p')
	{
		ans_len += ft_putstr("0x");
		ans_len += ft_put_ptr(va_arg(*ap, unsigned long long));
	}
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		ans_len += ft_putnbr(va_arg(*ap, int));
	else if (format[i + 1] == 'u')
		ans_len += ft_put_unsigned(va_arg(*ap, unsigned int));
	else if (format[i + 1] == 'x' || format[i + 1] == 'X')
		ans_len += ft_put_hex(va_arg(*ap, unsigned int), format[i + 1]);
	else if (format[i + 1] == '%')
		ans_len += ft_putchar(format[i + 1]);
	return (ans_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_formats(&ap, format, i);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
		if (len >= INT_MAX)
		{
			va_end(ap);
			return (-1);
		}
	}
	va_end(ap);
	return (len);
}
