/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:04:02 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/22 16:59:30 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_base(unsigned long long nbr)
{
	char	*base;
	int		count;

	count = 1;
	base = "0123456789abcdef";
	if (nbr >= 16)
		count += ft_putnbr_base(nbr / 16);
	write (1, &base[nbr % 16], 1);
	return (count);
}

int	ft_putptr(void *ptr)
{
	unsigned long long	ptr_adress;
	int					count;

	count = 0;
	if (!ptr)
		return (write(1, "0x0", 3));
	count += write (1, "0x", 2);
	ptr_adress = (unsigned long long)ptr;
	count += ft_putnbr_base(ptr_adress);
	return (count);
}
