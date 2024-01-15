/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:05:48 by lmaume            #+#    #+#             */
/*   Updated: 2024/01/15 15:07:40 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../libftprintf.h"

int		ft_toupper(int c);

char	*ft_str_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_toupper(str[i]);
		i++;
	}
	return (str);
}
