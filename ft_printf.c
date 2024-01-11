/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:06:08 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/11 14:10:10 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdlib.h>

int	error_seeker(int *error)


static
char	ft_define_type(char c, int *error)
{
	if (!c)
	{
		*error = CRASH_NULL;
		return (error);
	}
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
	if (c == '%')
		return (ft_type_porcent(char, error));
	else
		return (error);
}

int ft_printf(const char *str, ...)
{
	int		error;
	int		i;
	va_list params;
	char	c;
	va_start(params, str);

	i = 0;
	if (str[i] == '%')
		ft_define_type(str[i + 1], error);

	error = 0;
    ma_fonction(c, &error);
	if (error)
		return (error);
	va_end(params);
}
