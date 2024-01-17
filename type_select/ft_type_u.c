/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:27:56 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/17 15:39:36 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_type_u(char c, int *error)
{
	if (write(1, &c, 1) < 0)
		*error = CRASH_WRITE;
}
