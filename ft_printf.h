/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:04:00 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/11/05 11:09:30 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_digit(int num);
int	print_string(char *s);
int	print_unsigned_int(unsigned int n);
int	print_char(char c);
int	print_hexa(unsigned long nbr, int check);
int	print_pointer(void *p);

#endif
