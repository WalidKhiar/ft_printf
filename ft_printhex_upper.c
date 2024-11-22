/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_upper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:30:14 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/22 10:31:06 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
int ft_puthex_upper(unsigned int nbr)
{
    char *base;
    int count;

    count = 1;
    base = "0123456789ABCDEF";
    if (nbr >= 16)
        count += ft_puthex_upper(nbr / 16);
    write (1, &base[nbr % 16], 1);
    return (count);
}
