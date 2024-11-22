/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:45:24 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/21 20:07:54 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>
int ft_putunsigned(unsigned int n)
{
    char result;
    int count;

    count = 0;
	if (n > 9)
		count = ft_putunsigned(n / 10);
	result = n % 10 + '0';
	write(1, &result, 1);
    return (count + 1);
}