/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:04:32 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/17 19:09:48 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_type_d(int d, int *error)
{
	char	*str;

	str = ft_itoa(d);
	if (!str)
	{
		*error = CRASH_MALLOC;
		return ;
	}
	if (write(1, str, ft_strlen(str)) < 0)
		*error = CRASH_WRITE;
	free(str);
}
