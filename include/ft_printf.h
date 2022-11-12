#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include "libft.h"

int		ft_printf(const char *format, ...);
int		ft_formats(va_list *ap, const char *format, int i);
int		ft_putnbr(int nbr);
int		ft_put_ptr(uintptr_t num);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_put_unsigned(unsigned int n);
char	*ft_utoa(unsigned int n);
int		count_digit(unsigned	int num);
int		ft_put_hex(unsigned int num, const char format);
#endif