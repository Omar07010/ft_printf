/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 09:16:36 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/11/11 11:14:32 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(va_list ap, char c)
{
	if (c == 'c')
		return (print_char(va_arg(ap, int)));
	else if (c == 's')
		return (print_string(va_arg(ap, char *)));
	else if (c == 'p')
		return (print_pointer(va_arg(ap, void *)));
	else if (c == 'd' || c == 'i')
		return (print_digit(va_arg(ap, int)));
	else if (c == 'u')
		return (print_unsigned_int(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
	{
		if (c == 'x')
			return (print_hexa(va_arg(ap, unsigned int), 0));
		else
			return (print_hexa(va_arg(ap, unsigned int), 1));
	}
	else if (c == '%')
		return (print_char('%'));
	else
		return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;
	int		ret_value;

	count = 0;
	i = -1;
	if (!format)
		return (i);
	va_start(ap, format);
	while (format[++i])
	{
		if (format[i] == '%')
			ret_value = print_format(ap, format[++i]);
		else
			ret_value = print_char(format[i]);
		if (ret_value == -1)
		{
			va_end(ap);
			return (-1);
		}
		count += ret_value;
	}
	va_end(ap);
	return (count);
}
