/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:45:08 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/25 16:40:01 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putvoid(unsigned long num)
{
	char		*hex_chars;
	int			i;
	static bool	put_char = true;

	hex_chars = LOW_HEX;
	i = 0;
	if (!num)
		return (ft_putstr("(nil)"));
    if (put_char)
    {
        i += ft_putstr("0x");
        put_char = false;
    }
	if (num >= 16)
		i += ft_putvoid(num / 16);
	i += ft_putchar(hex_chars[num % 16]);
	return (i);
}
