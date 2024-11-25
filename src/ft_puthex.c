/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:18:36 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/25 15:31:20 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int ft_puthex(unsigned int num, char *base)
{
    int     i;

    i = 0;
    if (num >= 16)
    {
        i += ft_puthex(num / 16, base);
        i += ft_putchar(base[num % 16]);
    }
    else
        i += ft_putchar(base[num % 16]);
    return (i);
}
