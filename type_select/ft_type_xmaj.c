/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_xmaj.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:28:06 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/18 19:51:39 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_type_xmaj(unsigned int x, int *error)
{
	char*	ptr;
	
	ptr = ft_str_toupper(ft_hexa_converter(&x));
	if (!ptr)
	{
		*error = CRASH_MALLOC;
		return ;
	}
	if (write(1, ptr, ft_strlen(ptr)) < 0)
		*error = CRASH_WRITE;
	free (ptr);
}
