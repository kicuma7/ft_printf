/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:33:16 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/25 15:30:13 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int ft_putnbr(int num)
{
    int     i;
    long    n;

    n = num;
    i = 0;
    if (n < 0)
    {
        n = n * -1;
        i += ft_putchar('-');
    }
    if (n >= 10)
    {
        i += ft_putnbr(n / 10);
        i += ft_putchar((n % 10) + '0');
    }
    else
        i += ft_putchar((n % 10) + '0');
    return (i);
}
int ft_putnbr_u(unsigned int num)
{
    int     i;
    long    n;

    n = num;
    i = 0;
    if (n >= 10)
    {
        i += ft_putnbr(n / 10);
        i += ft_putchar((n % 10) + '0');
    }
    else
        i += ft_putchar((n % 10) + '0');
    return (i);
}
