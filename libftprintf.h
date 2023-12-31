/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:10:48 by lmaume            #+#    #+#             */
/*   Updated: 2023/12/21 17:36:53 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>

enum e_errors
{
    ERROR_PRINTF = -1,
    CRASH_NULL = -2,
    CRASH_WRITE = -3,
	CRASH_MALLOC = -4
};


int	ft_printf(const char *str, ...);

#endif
