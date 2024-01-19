/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:06:08 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/19 16:27:01 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdlib.h>

static
int	ft_define_type(char c, va_list params, int *error)
{
	if (c == 'c')
		return (ft_type_c(va_arg(params, int), error));
	if (c == 's')
		return (ft_type_s(va_arg(params, char*), error));
	if (c == 'p')
		return (ft_type_p(va_arg(params, void*), error));
	if (c == 'd')
		return (ft_type_d(va_arg(params, int), error));
	if (c == 'i')
		return (ft_type_i(va_arg(params, int), error));
	if (c == 'u')
		return (ft_type_u(va_arg(params, unsigned int), error));
	if (c == 'x')
		return (ft_type_x(va_arg(params, unsigned int), error));
	if (c == 'X')
		return (ft_type_xmaj(va_arg(params, unsigned int), error));
	else
		return (ft_type_porcent(error));
}

static
int	tamere(const char *str, va_list params, int *error, int *j)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			{
				c = str[i + 1];
				if (!c)
					return (ERROR_PRINTF);
				*j += (ft_define_type(c, params, error));
				i++;
			}
			else
				*j += write(1, &str[i], 1);
			if (error < 0)
				return (ERROR_PRINTF);
		i++;
	}
	return (*j);
}

int	ft_printf(const char *str, ...)
{
	int		error;
	int		i;
	int		j;
	va_list params;
	
	va_start(params, str);
	error = 0;
	i = 0;
	j = 0;
	j = tamere(str, params, &error, &j);
	va_end(params);
	if (error)
		return (ERROR_PRINTF);
	return (j);
}
