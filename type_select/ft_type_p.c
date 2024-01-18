/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:27:12 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/18 19:28:23 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_type_p(void *p, int *error)
{
	char*	ptr;
	
	ptr = ft_hexa_converter((unsigned int *)p);
	if (!ptr)
	{
		*error = CRASH_MALLOC;
		return ;
	}
	if (write(1, ptr, ft_strlen(ptr)) < 0)
		*error = CRASH_WRITE;
	free (ptr);
}
