/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:30:13 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/11/11 11:02:11 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	int	count;
	int	ret;

	ret = 0;
	if (n == 0)
		return (print_char('0'));
	count = 0;
	if (n < 0)
	{
		ret = print_char('-');
		if (ret == -1)
			return (-1);
		count += ret;
		n *= -1;
	}
	if (n > 9)
	{
		ret = ft_putnbr(n / 10);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	ret = print_char((n % 10) + '0');
	return (ret + count);
}

int	print_digit(int num)
{
	int		result;
	long	nbr;

	nbr = num;
	result = ft_putnbr(nbr);
	return (result);
}
