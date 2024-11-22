/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:45:24 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/22 17:52:07 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	char	result;
	int		count;

	count = 0;
	if (n > 9)
		count = ft_putunsigned(n / 10);
	result = n % 10 + '0';
	write(1, &result, 1);
	return (count + 1);
}
