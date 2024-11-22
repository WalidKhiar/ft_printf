/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:51:24 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/22 10:35:41 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

static int	count_len_integer(int n)
{
	int	i;

    
	i = 0;
    ft_putnbr_fd(n, 1);
	if (n == 0)
		return (1);
    if (n == -2147483648)
        return (11);
    if (n < 0)
    {
        i = 1;
        n *= -1;
    }
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

 static int ft_putstr_len(char *str) {
    if (!str) {
        ft_putstr_fd("(null)", 1);
        return (6);
    }
    ft_putstr_fd(str, 1);

    return (ft_strlen(str));
}

int ft_format_specifier(const char specifier,va_list args)
{
    if (specifier == 'c')
    {
        ft_putchar_fd(va_arg(args, int), 1);
        return (1);
    }
    if (specifier == 's')
        return (ft_putstr_len(va_arg(args, char *)));
    else if (specifier == 'd' || specifier == 'i')
        return (count_len_integer(va_arg(args, int))); 
    else if (specifier == 'p')
        return (ft_putptr(va_arg(args, void *)));
    else if (specifier == 'u')
        return (ft_putunsigned(va_arg(args,unsigned int)));
    else if (specifier == 'x')
        return (ft_puthex_lower(va_arg(args, unsigned int)));
    else if (specifier == 'X')
    return (ft_puthex_upper(va_arg(args, unsigned int)));
    return (0);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int count;
    count = 0;
    va_start (args, format);
    while (*format != '\0')
    {
        if (*format == '%') {
            ++format;
            if (!*format)
                return 0;
           count += ft_format_specifier(*format, args);
        }
        else
           count += write (1, format, 1);
        format++;
    }
    va_end (args);
    return count;
 }
