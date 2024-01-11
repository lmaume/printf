/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_converter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:33:48 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/11 13:56:25 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*hexa_converter(int base_number)
{
	int		i;
	char	*hextable;
	char	*result;

	hextable = "0123456789abcdef";
	i = intlen(base_number);
	while(i-- != 0)
	{
		result[i] = hextable[base_number / 16];
		base_number /= 10;
	}
	return (result);
}
