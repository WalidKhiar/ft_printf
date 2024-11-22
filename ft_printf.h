/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:07:10 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/22 16:50:27 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_putptr(void *ptr);
int	ft_putunsigned(unsigned int n);
int	ft_puthex_lower(unsigned int nbr);
int	ft_puthex_upper(unsigned int nbr);
#endif
