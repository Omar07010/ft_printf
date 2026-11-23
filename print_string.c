/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:31:25 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/11/11 11:13:23 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *s)
{
	int	ret;
	int	count;
	int	i;

	ret = 0;
	i = 0;
	count = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		ret = print_char(s[i]);
		if (ret == -1)
			return (-1);
		count += ret;
		i++;
	}
	return (count);
}
