/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_porcent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:27:21 by lmaume            #+#    #+#             */
/*   Updated: 2024/02/08 19:14:46 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_type_porcent(char c, int *error)
{
	if (write(1, "%", 1) < 0)
		*error = CRASH_WRITE;
	if (write(1, &c, 1) < 0)
		*error = CRASH_WRITE;
	return (2);
}
