/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:28:02 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/18 19:29:29 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_type_x(unsigned int x, int *error)
{
	char*	ptr;
	
	ptr = ft_hexa_converter(&x);
	if (!ptr)
	{
		*error = CRASH_MALLOC;
		return ;
	}
	if (write(1, ptr, ft_strlen(ptr)) < 0)
		*error = CRASH_WRITE;
	free (ptr);
}
