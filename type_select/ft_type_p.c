/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:27:12 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/15 14:56:13 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_type_p(void *p, int *error)
{
	if (write(1, ft_hexa_converter(*((int *)p)), ft_strlen(ft_hexa_converter(*((int *)p)))))
		*error = CRASH_WRITE;
}
