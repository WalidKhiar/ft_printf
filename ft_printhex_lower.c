/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_lower.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:46:11 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/22 10:20:30 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
int ft_puthex_lower(unsigned int nbr)
{
    char *base;
    int count;

    count = 1;
    base = "0123456789abcdef";
    if (nbr >= 16)
        count += ft_puthex_lower(nbr / 16);
    write (1, &base[nbr % 16], 1);
    return (count);
}
