/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:46:59 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/25 16:36:04 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int ft_printf(char *format, ...)
{
    va_list args;
    int i;

    va_start(args, format);
    i = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 's')
                i += ft_putstr(va_arg(args, char *));
            else if (*format == 'c')
                i += ft_putchar(va_arg(args, int));
            else if (*format == '%')
                i += ft_putchar('%');
            else if (*format == 'd' || *format == 'i')
                i += ft_putnbr(va_arg(args, int));
            else if (*format == 'u')
                i += ft_putnbr_u(va_arg(args, unsigned int));
            else if (*format == 'x')
                i += ft_puthex(va_arg(args, unsigned int), LOW_HEX);
            else if (*format == 'X')
                i += ft_puthex(va_arg(args, unsigned int), UP_HEX);
            else if (*format == 'p')
            {
                i += ft_putvoid(va_arg(args, unsigned long));
            }
            format++;
        }
        else
            i += ft_putchar(*format++);
    }
    va_end(args);
    return (i);
}
