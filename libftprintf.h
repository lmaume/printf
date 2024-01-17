/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:10:48 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/17 19:51:24 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

void	ft_type_c(int c, int *error);
void	ft_type_d(int d, int *error);
void	ft_type_i(int i, int *error);
void	ft_type_p(void *p, int *error);
void	ft_type_porcent(int *error);
void	ft_type_s(char *s, int *error);
void	ft_type_u(char u, int *error);
void	ft_type_x(unsigned int x, int *error);
void	ft_type_xmaj(unsigned int x, int *error);
char	*ft_hexa_converter(int base_number);
char	*ft_str_toupper(char *str);
int		ft_printf(const char *str, ...);

enum e_errors
{
	ERROR_PRINTF = -1,
	CRASH_NULL = -2,
	CRASH_WRITE = -3,
	CRASH_FLAG = -4,
	CRASH_MALLOC = -5
};


int	ft_printf(const char *str, ...);

#endif
