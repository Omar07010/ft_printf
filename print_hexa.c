/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:32:30 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/11/08 10:33:15 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*get_hex(int check)
{
	if (check)
		return ("0123456789ABCDEF");
	return ("0123456789abcdef");
}

int	print_hexa(unsigned long nbr, int check)
{
	char	*hex;
	int		count;
	int		ret;

	hex = get_hex(check);
	count = 0;
	if (nbr >= 16)
	{
		ret = print_hexa(nbr / 16, check);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	ret = print_char(hex[nbr % 16]);
	if (ret == -1)
		return (-1);
	count += ret;
	return (count);
}
