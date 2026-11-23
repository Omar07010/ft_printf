/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:35:30 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/11/08 10:36:14 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *p)
{
	unsigned long	ptr;
	int				count;
	int				ret;

	if (!p)
		return (print_string("(nil)"));
	ptr = (unsigned long)p;
	count = 0;
	ret = print_string("0x");
	if (ret == -1)
		return (-1);
	count += ret;
	ret = print_hexa(ptr, 0);
	if (ret == -1)
		return (-1);
	count += ret;
	return (count);
}
