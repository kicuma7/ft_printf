/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:24:56 by jquicuma          #+#    #+#             */
/*   Updated: 2025/02/27 12:21:05 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_format(char format_char, va_list args)
{
	if (format_char == '\0')
		return (0);
	if (format_char == '%')
		return (ft_putchar('%'));
	else if (format_char == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format_char == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format_char == 'i' || format_char == 'd')
		return (print_num(va_arg(args, int)));
	else if (format_char == 'u')
		return (print_unsigned_num(va_arg(args, unsigned int)));
	else if (format_char == 'x')
		return (print_hexa(va_arg(args, unsigned int), LOW_HEX));
	else if (format_char == 'X')
		return (print_hexa(va_arg(args, unsigned int), UP_HEX));
	else if (format_char == 'p')
		return (print_void(va_arg(args, unsigned int)));
	return (0);
}
