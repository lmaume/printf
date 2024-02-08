/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:27:31 by lmaume            #+#    #+#             */
/*   Updated: 2024/02/08 18:44:31 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_type_s(char *s, int *error)
{
	int	w_len;

	w_len = write(1, s, ft_strlen(s));
	if (w_len < 0)
		*error = CRASH_WRITE;
	return (w_len);
}
