/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:52:47 by jquicuma          #+#    #+#             */
/*   Updated: 2025/03/05 08:43:58 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_hexa(unsigned long num, char *base, bool is_void)
{
	int	count;

	count = 0;
	if (!num && is_void)
		return (ft_putstr("(nil)"));
	if (num >= 16)
	{
		count += print_hexa(num / 16, base, is_void);
		count += ft_putchar(base[num % 16]);
	}
	else
		count += ft_putchar(base[num % 16]);
	return (count);
}

