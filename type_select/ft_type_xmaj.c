/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_xmaj.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:28:06 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/11 14:04:16 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_type_xmaj(unsigned int x, int *error)
{
	write(1, ft_str_toupper(ft_hexa_converter(x)), ft_strlen(ft_hexa_converter(x)));
}