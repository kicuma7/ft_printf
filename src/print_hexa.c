/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:52:47 by jquicuma          #+#    #+#             */
/*   Updated: 2025/02/27 12:14:45 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_hexa(unsigned int num, char *base)
{
	int	count;

	count = 0;
	if (num >= 16)
	{
		count += print_hexa(num / 16, base);
		count += ft_putchar(base[num % 16]);
	}
	else
		count += ft_putchar(base[num % 16]);
	return (count);
}
