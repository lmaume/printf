/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:27:12 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/19 16:06:06 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_type_p(void *p, int *error)
{
	char*	ptr;
	int		w_len;
	
	ptr = ft_hexa_converter((unsigned int *)p);
	if (!ptr)
	{
		*error = CRASH_MALLOC;
		return (*error);
	}
	w_len = write(1, ptr, ft_strlen(ptr));
	if (w_len < 0)
		*error = CRASH_WRITE;
	free (ptr);
	return (w_len);
}
