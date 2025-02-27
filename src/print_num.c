/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:17:22 by jquicuma          #+#    #+#             */
/*   Updated: 2025/02/27 11:33:09 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_num(int num)
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
