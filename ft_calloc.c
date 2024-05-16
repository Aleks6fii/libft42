/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:54:43 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/13 15:49:45 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*pt;
	int		check;
	int		i;

	check = (int)number * (int)size;
	if (number == 0 || size == 0)
		check = 1;
	else if ((check / (int)number != (int)size) || check < 0)
		return (NULL);
	pt = malloc(check);
	i = 0;
	while (i < check)
	{
		pt[i] = 0;
		i++;
	}
	return ((void *) pt);
}
