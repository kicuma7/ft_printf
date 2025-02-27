/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:14:46 by jquicuma          #+#    #+#             */
/*   Updated: 2025/02/27 11:41:06 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	print_format(char format_char, va_list args);
int	print_num(int num);
int	print_unsigned_num(unsigned int num);

#endif
