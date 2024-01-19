/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:46:00 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/19 15:54:32 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_type_c(int c, int *error)
{
	int	w_len;
	
	w_len = write(1, &c, 1);
	if (w_len < 0)
		*error = CRASH_WRITE;
	return (w_len);
}
