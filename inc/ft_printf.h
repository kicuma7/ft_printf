/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:43:39 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/25 15:33:07 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define LOW_HEX "0123456789abcdef"
# define UP_HEX "0123456789ABCDEF"

int	ft_printf(char *format, ...);
int ft_putstr(char *str);
int ft_putchar(char c);
int ft_putnbr(int num);
int ft_putnbr_u(unsigned int num);
int ft_puthex(unsigned int num, char *base);

#endif
