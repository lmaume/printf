/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:06:08 by lmaume            #+#    #+#             */
/*   Updated: 2023/12/21 18:47:32 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <strlib.h>

static
char define_type(char c, int *error)
{
	if (!c)
	{
		*error = CRASH_NULL;
		return (error);
	}
	if (c == c)
		return (ft_type_c(va_arg(var, char), error));
	if (c == s)
		return ();
	if (c == p)
		return ();
	if (c == d)
		return ();
	if (c == i)
		return ();
	if (c == u)
		return ();
	if (c == x)
		return ();
	if (c == X)
		return ();
	if (c == %)
		return ();
	else
		return ();
}

int ft_printf(const char *str, ...)
{
	int    error;
	va_list var;
	
	va_start(var, str);

	if str[i] == '%'
	


	error = 0;
    ma_fonction(c, &error);
	if (error)
		return (ERROR_PRINTF);
	va_end(var);
}
