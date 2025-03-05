/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:14:46 by jquicuma          #+#    #+#             */
/*   Updated: 2025/03/05 08:41:13 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>

# define UP_HEX "0123456789ABCDEF"
# define LOW_HEX "0123456789abcdef"

int	ft_printf(char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	print_format(char format_char, va_list args);
int	print_num(int num);
int	print_unsigned_num(unsigned int num);
int	print_hexa(unsigned long num, char *base, bool is_void);
//int	print_void(unsigned long num);

#endif
