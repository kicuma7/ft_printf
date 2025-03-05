/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:17:22 by jquicuma          #+#    #+#             */
/*   Updated: 2025/03/05 08:16:21 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_num(int num)
{
	int		count;
	long	printed_num;

	count = 0;
	printed_num = num;
	if (printed_num < 0)
	{
		count += ft_putchar('-');
		printed_num = printed_num * -1;
	}
	if (printed_num >= 10)
	{
		count += print_num(printed_num / 10);
		count += ft_putchar(printed_num % 10 + '0');
	}
	else
		count += ft_putchar(printed_num % 10 + '0');
	return (count);
}

int	print_unsigned_num(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
	{
		count += print_num(num / 10);
		count += ft_putchar(num % 10 + '0');
	}
	else
		count += ft_putchar(num % 10 + '0');
	return (count);
}
