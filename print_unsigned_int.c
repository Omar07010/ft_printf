/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:33:34 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/11/11 10:36:39 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_numbers(unsigned int num)
{
	char	c;
	int		res;
	int		count;

	res = 0;
	count = 0;
	if (num > 9)
	{
		res = print_numbers(num / 10);
		if (res == -1)
			return (-1);
	}
	c = (num % 10) + '0';
	count = print_char(c);
	if (count == -1)
		return (-1);
	else
		return (res + count);
}

int	print_unsigned_int(unsigned int n)
{
	int	result;

	result = print_numbers(n);
	return (result);
}
