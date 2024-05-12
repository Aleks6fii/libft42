/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:54:43 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/08 20:55:18 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*pt;
	size_t	check;

	check = number * size;
	if (number != 0 && check / number != size)
		return (NULL);
	if (check == 0)
		return (NULL);
	pt = (void *)malloc(size * number);
	return (pt);
}
