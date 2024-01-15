/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_converter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:33:48 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/15 15:17:41 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../libftprintf.h"

static
int	intlen(int number)
{
	int	len;

	len = 0;
	while (number >= 1)
	{
		number /= 10;
		len++;
	}
	return (len);
}

char	*ft_hexa_converter(int base_number)
{
	int		i;
	char	*hextable;
	char	*result;

	result = 0;
	hextable = "0123456789abcdef";
	i = intlen(base_number);
	while(i-- != 0)
	{
		result[i] = hextable[base_number / 16];
		base_number /= 10;
	}
	return (result);
}
